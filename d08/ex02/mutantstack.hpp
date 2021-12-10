#include <iostream>
#include <stack>

template <class T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        virtual ~MutantStack() {return;}
        MutantStack & operator=(MutantStack const & src) {(void)src;}
        MutantStack(MutantStack const & src) {(void)src;}

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }

};

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack() {return;}


//template<typename T, typename Container>
//void MutantStack<T, Container>::iterator(void) {
//    return;
//}