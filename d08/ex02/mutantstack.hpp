#include <iostream>
#include <stack>

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


template <class T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack & operator=(MutantStack const & src);
        MutantStack( const MutantStack<T, Container> & src);

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
};

#endif