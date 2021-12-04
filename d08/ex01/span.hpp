#include <iostream>
#include <string>
#include <vector>


class Span
{
    private:
        std::vector<int> _container;
        unsigned int _len;

    public:
        Span(unsigned int n);
        ~Span();
        Span & operator=(Span const & src);
        Span(Span const & src);
        void addNumber(int n);
        void addManyNumber(std::vector<int> ints);
        int shortestSpan() const;
        int longestSpan() const;
        std::vector<int> getContainer() const;
        unsigned int getLength() const;
};

std::ostream & operator<<( std::ostream & o, Span const & src);
