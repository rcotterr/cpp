#include <iostream>
#include <string>
#include <list>


class Span
{
    private:
        std::list<int> _container;
        unsigned int _len;

    public:
        Span(unsigned int n);
        ~Span();
        Span & operator=(Span const & src);
        Span(Span const & src);
        void addNumber();
        int shortestSpan() const;
        int longestSpan() const;
        std::list<int> getContainer() const;
        unsigned int getLength() const;
};

std::ostream & operator<<( std::ostream & o, Span const & src);
