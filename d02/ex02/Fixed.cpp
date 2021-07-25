#include <iostream>
#include <cmath>
#include <string>
#include "Fixed.hpp"

bool PRINT = false;


void print(std::string info) {
    if (PRINT) {
        std::cout << info << std::endl;
    }
}

Fixed::Fixed() {
    print("Default constructor called");
	this->_value = 0;
	return;
}

Fixed::Fixed(Fixed const &src) {
    print("Copy constructor called");
	*this = src;
	return;
}

Fixed::Fixed(int const num) {
    print("Int constructor called ");
    this->_value = num<<Fixed::_fractional_bits;
	return;
}

Fixed::Fixed(float const num) {
    print("Float constructor called ");
    float check = roundf(num * 256.0);
    this->_value = check;
	return;
}

Fixed::~Fixed(void) {
    print("Destructor called");
	return;
}

Fixed & Fixed::operator=( Fixed const &rhs ) {
    print("Assignation operator called");
    this->_value = rhs.getRawBits();
    return *this;
}

bool Fixed::operator==( Fixed const &rhs ) const {
    print("== operator called");
    return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=( Fixed const &rhs ) const {
    print("!= operator called");
    return !(this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator>( Fixed const &rhs ) const {
    print("> operator called");
    return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<( Fixed const &rhs ) const {
    print("< operator called");
    return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=( Fixed const &rhs ) const {
    print(">= operator called");
    return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=( Fixed const &rhs ) const {
    print("<= operator called");
    return this->getRawBits() <= rhs.getRawBits();
}


Fixed Fixed::operator+( Fixed const &rhs ) const {
    print("+ operator called");

    Fixed c;

    int rawBits = this->getRawBits() + rhs.getRawBits();
    c.setRawBits(rawBits);
    return c;
}

Fixed Fixed::operator-( Fixed const &rhs ) const {
    print("- operator called");;

    Fixed c;

    int rawBits = this->getRawBits() - rhs.getRawBits();
    c.setRawBits(rawBits);
    return c;
}

Fixed Fixed::operator*( Fixed const &rhs ) const {
    print("* operator called");;

    Fixed c;

    int rawBits = (this->getRawBits() * rhs.getRawBits())>>Fixed::_fractional_bits;
    c.setRawBits(rawBits);
    return c;
}

Fixed Fixed::operator/( Fixed const &rhs ) const {
    print("/ operator called");

    Fixed c;

    int rawBits = (roundf(this->getRawBits())/roundf(rhs.getRawBits()))*256.0;
    c.setRawBits(rawBits);
    return c;
}

Fixed & Fixed::operator++(){
    print("pre ++ operator called");
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int){
    print("post ++ operator called");
    Fixed c = *this;
    ++*this;
    return c;
}

Fixed & Fixed::operator--(){
    print("pre -- operator called");
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int){
    print("post -- operator called");
    Fixed c = *this;
    --*this;
    return c;
}

const Fixed & Fixed::min(Fixed const &first, Fixed const &second) {
    print("min member function called");
    return first.getRawBits() <= second.getRawBits() ? first : second;
}

Fixed & Fixed::min(Fixed &first, Fixed &second) {
    print("min member function called");
    return first.getRawBits() <= second.getRawBits() ? first : second;
}

const Fixed & Fixed::max(Fixed const &first, Fixed const &second) {
    print("max member function called");
    return first.getRawBits() <= second.getRawBits() ? second : first;
}

Fixed & Fixed::max(Fixed &first, Fixed &second) {
    print("max member function called");
    return first.getRawBits() <= second.getRawBits() ? second : first;
}


int Fixed::getRawBits( void ) const {
    print("getRawBits member function called");
	return this->_value;
}

void Fixed::setRawBits( int const raw ) {
    print("setRawBits member function called");
	this->_value = raw;
}

float Fixed::toFloat( void ) const {
    print("toFloat operator called");
    return this->_value / 256.0;
}

int Fixed::toInt( void ) const {
    print("toInt operator called");
    return this->_value>>Fixed::_fractional_bits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs) {
    print("<< operator called");
    o << rhs.getRawBits() / 256.0;
    return o;
}