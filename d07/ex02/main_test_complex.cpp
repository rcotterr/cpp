#include <iostream>
#include "Array.hpp"

class Awesome
{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        Awesome( int n ) : _n( n ) {}
        Awesome( Awesome & a ) { *this = a; return; }
        int get( void ) const { return this->_n; }
        Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    private:
        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
    o << rhs.get();
    return o;
}


int main(int, char**)
{
    std::cout << "***check Array with complex type***" << std::endl;
    Array<Awesome> a;
    Array<Awesome> b(4);

    std::cout << "Array size of b is: " << a.size() << std::endl;

    std::cout << "The second element of b is: " << b[2] << std::endl;
    Awesome q(5);
    b[2] = q;
    std::cout << "After change the second element of b is: " << b[2] << std::endl;

    Array<Awesome> c = b;
    std::cout << "The second element of c is: " << c[2] << std::endl;

    Array<Awesome> d(b);
    std::cout << "The second element of d is: " << d[2] << std::endl;

    std::cout << "Check out of limits:" << std::endl;
    try {
        b[35];
    }
    catch (std::exception) {
        std::cout << "Exception caught"  << std::endl;
    }

    try {
        b[-1];
    }
    catch (std::exception) {
        std::cout << "Exception caught"  << std::endl;
    }
    std::cout << std::endl;
}