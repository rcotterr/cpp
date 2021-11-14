#include <iostream>
#include <string>
#include <typeinfo>
#include <sstream>

//void toChar(char * arg) {
//    std::cout << "char: ";
//    if (strlen(example) == 1) {
//
//    }
//
//}


int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "must provide one arg" << std::endl;
        return 0;
    }
    char * some_var = argv[1];
    std::cout << some_var << std::endl;
    void * v = argv[1];

    std::cout << "type: " << typeid(argv[1]).name() << std::endl;
    std::cout << "type: " << typeid(v).name() << std::endl;
    std::cout << "type: " << typeid(1234567890).name() << std::endl;
    std::cout << "type: " << typeid("1234567890").name() << std::endl;

    int n;
    std::istringstream s(argv[1]);
    s >> n;



    if(s) {

        char ch;
    //    std::string s = argv[1];
        s >> ch;


        if(!s.eof())
        {
            std::cout << "err " << ch << std::endl;
        }
        else {
        std::cout << "ok " << ch << std::endl;
        }
    }


    char q = static_cast<char>(argv[1][0]);
    std::cout << "char q: " << q << std::endl;

    long double ld = std::strtold( argv[1], NULL ); //TODO process c, a, b and so on
    std::cout << "ld: " << ld << std::endl;

    char c = static_cast<char>(ld);
    std::cout << "char: " << c << std::endl;
    if ((bool)std::isprint(c)) {
        std::cout << "char: " << c << std::endl;
    }
    else {
        std::cout << "char: Non displayable" << std::endl;
    }

    int i = static_cast<int>(ld);
    std::cout << "int: " << i << std::endl;

    float f = static_cast<float>(ld);
    std::cout << "float: " << f << std::endl;

    double d = static_cast<double>(ld);
    std::cout << "double: " << d << std::endl;


    return 0;
}


// char, int, float or double

// decimal notation

//Examples of char literal values ’c’, ’a’... To simplify, please note that: non displayable characters can’t be passed as a parameter to your program, and if a conversion
//to char is not displayable, output a notification instead.

//Examples of int literal values: 0, -42, 42...

//Examples of float literal values: 0.0f, -4.2f, 4.2f... You will also accept these
//pseudo literals as well, you know, for science: -inff, +inff and nanf.

//Examples of double literal values: 0.0, -4.2, 4.2 You will also accept these pseudo
//literals as well, you know, for fun: -inf, +inf and nan.

//Your program must detect the literal’s type, acquire that literal in the right type (so
//it’s not a string anymore), then convert it explicitly to each of the three other types and
//display the results using the same formatting as below. If a conversion does not make
//sense or overflows, display that the conversion is impossible. You can include any header
//you need to handle numeric limits and special values.


// ./convert 42.0f
//./convert nan
//./convert 0
//./convert ’c’
//./convert ’a’
//0, -42, 42...
//0.0f, -4.2f, 4.2f
//-inff, +inff and nanf.
//0.0, -4.2, 4.2