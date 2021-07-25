#include <iostream>
#include <cmath>
#include "Fixed.hpp"


Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const num) {
    std::cout << "Int constructor called " << num << std::endl;
    this->_value = num<<Fixed::_fractional_bits;
	return;
}

Fixed::Fixed(float const num) {
    std::cout << "Float constructor called " << num << std::endl;
    float check = roundf(num * 256);
    this->_value = check;
    std::cout << "float:" << this->_value << " " << check << std::endl;
	return;
}


Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=( Fixed const &rhs ) {
    std::cout << "Assignation operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return *this;

}

int Fixed::getRawBits( void ) const {
//    std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat( void ) const {
    return this->_value / 256.0;
}

int Fixed::toInt( void ) const {
    return this->_value>>Fixed::_fractional_bits;
}
//int toInt( void ) const;

std::ostream & operator<<( std::ostream & o, Fixed const & rhs) {
    o << rhs.getRawBits() / 256.0;
    return o;
}