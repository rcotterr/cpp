#include <iostream>
#include "mutantstack.hpp"

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack( const MutantStack<T,Container>  & src) {*this = src; return ;}


//template<typename T>
//MutantStack<T>::MutantStack() {
//    return;
//}

//template<typename T, typename Container>
//MutantStack<T, Container>::MutantStack() {return;}


//template<typename T, typename Container>
//MutantStack<T, Container>::MutantStack( const MutantStack<T,Container>  & src) {(void)src;}
//MutantStack<T, Container>::MutantStack(MutantStack const & src) {(void)src;}


//MutantStack::~MutantStack() {
//    return;
//}
//
//MutantStack & MutantStack::operator=(MutantStack const & src) {
//    (void)src;
//    return *this;
//}
//
//MutantStack::MutantStack(MutantStack const & src) {
//    *this = src;
//    return;
//}
//
//void MutantStack::iterator() {
//    //TODO iterator
//    return;
//}
