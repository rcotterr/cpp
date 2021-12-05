#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <stack>

template <class T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
using std::stack<T, Container>::c;
    public:
        struct iterator
    {
//        using iterator_category = std::forward_iterator_tag;
//        using difference_type   = std::ptrdiff_t;
//        using value_type        = int;
//        using pointer           = int*;
//        using reference         = int&;

        iterator(T * ptr) : m_ptr(ptr) {}

        T & operator*() const { return *m_ptr; }
        T * operator->() { return m_ptr; }
        iterator& operator++() { m_ptr++; return *this; }
        iterator operator++(int) { iterator tmp = *this; ++(*this); return tmp; }
        bool operator== (const iterator& b) { return this->m_ptr == b.m_ptr; };
        bool operator!= (const iterator& b) { return this->m_ptr != b.m_ptr; };

    private:
        T * m_ptr;
    };
//        template<>
        MutantStack(); //: std::stack<T>() {return;};
//        MutantStack();
        virtual ~MutantStack() {return;}
        MutantStack & operator=(MutantStack const & src) {(void)src;}
        MutantStack(MutantStack const & src) {(void)src;}
//        void iterator();

      iterator begin() { return iterator(&c); }
//        iterator end() { return iterator(&m_data[c.size()]); }

//        void begin() const { return std::begin(c); }
//        void end() const { return std::end(c); }

};

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack() {return;}


//template<typename T, typename Container>
//void MutantStack<T, Container>::iterator(void) {
//    return;
//}