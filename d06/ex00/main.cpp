#include <iostream>
#include <string>
#include <typeinfo>
#include <sstream>
#include <errno.h>


bool is_displayable_char(std::string arg) {
    return arg.length() == 1 && std::isprint(arg[0]) && !isnumber(arg[0]);
}


void process_char(char c) {
    std::cout << "char: " << c << std::endl;

    int i = static_cast<int>(c);
    std::cout << "int: " << i << std::endl;

    float f = static_cast<float>(c);
    std::cout << "float: " << f << std::endl;

    double d = static_cast<double>(c);
    std::cout << "double: " << d << std::endl;

}


int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "must provide one arg" << std::endl;
        return 0;
    }
    char * arg = argv[1];
    std::cout << arg << std::endl;

    if (is_displayable_char(arg)) {
        process_char(arg[0]);
        return 0;
    }

    char *endptr = NULL;
    if (arg[strlen(arg) - 1] == 'f') { //TODO 123f
        arg[strlen(arg) - 1] = '\0';
    }

    long double ld = std::strtold(arg, &endptr);
    std::cout << "ld: " << ld << std::endl; //delete

    if (errno != 0 || arg == endptr || *endptr != 0) { //TODO more errors https://stackoverflow.com/questions/26080829/detecting-strtol-failure/26083517
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return 0;
    }

    char c = static_cast<char>(ld);
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