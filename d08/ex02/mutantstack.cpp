#include <iostream>
#include "mutantstack.hpp"


template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack<T,Container> const & src) {
    *this = src;
    return;
}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack() {
    return;
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {
    return;
}

template<typename T, typename Container>
MutantStack<T, Container> & MutantStack<T, Container>::operator=(MutantStack const & src) {
    this->c = src.c;
    return *this;
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
    return this->c.begin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
    return this->c.end();
}