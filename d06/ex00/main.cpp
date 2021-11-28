#include <iostream>
#include <string>
#include <typeinfo>
#include <sstream>
#include <errno.h>
#include <regex>
//#include <QString>
#include <cstdlib>
#include <stdlib.h>


bool is_displayable_char(std::string arg) {
    return arg.length() == 1 && std::isprint(arg[0]) && !isnumber(arg[0]);
}


void process_char(char c) {
    std::cout << "char: " << c << std::endl;

    int i = static_cast<int>(c);
    std::cout << "int: " << i << std::endl;

    float f = static_cast<float>(c);
    std::cout << "float: " << f << ".0f" << std::endl;

    double d = static_cast<double>(c);
    std::cout << "double: " << d << ".0" << std::endl;
}


bool is_int(char * arg) {
    char *end;
    long  l;
    errno = 0;
    l = std::strtol(arg, &end, 10);
    if ((errno == ERANGE && l == LONG_MAX) || l > INT_MAX) {
        return false;
    }
    if ((errno == ERANGE && l == LONG_MIN) || l < INT_MIN) {
        return false;
    }
    if (*arg == '\0' || *end != '\0') {
        return false;
    }
    return true;
}


void process_int(int n) {

    char c = static_cast<char>(n);

    if ((bool)std::isprint(c)) {
        std::cout << "char: " << c << std::endl;
    }
    else {
        std::cout << "char: Non displayable" << std::endl;
    }

    std::cout << "int: " << n << std::endl;

    float f = static_cast<float>(n);
    std::cout << "float: " << f << ".0f" << std::endl;

    double d = static_cast<double>(n);
    std::cout << "double: " << d << ".0" << std::endl;
}


//bool is_int(char * arg) {
//    char *end;
//    long  l;
//    errno = 0;
//    l = std::strtol(arg, &end, 10);
//    if ((errno == ERANGE && l == LONG_MAX) || l > INT_MAX) {
//        return false;
//    }
//    if ((errno == ERANGE && l == LONG_MIN) || l < INT_MIN) {
//        return false;
//    }
//    if (*arg == '\0' || *end != '\0') {
//        return false;
//    }
//    return true;
//}


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

    if (is_int(arg)) {
        std::cout << "is int" << std::endl;
        int n = std::stoi(arg);
        process_int(n);
        return 0;
    }

    if (is_float(arg)) {
        std::cout << "is float" << std::endl;
//        int n = std::stoi(arg);
//        process_int(n);
        return 0;
    }

//    int i_;
//    std::cout << sscanf("1231q", "%d", &i_) << std::endl;
//    std::cout << sscanf("1231", "%d", &i_) << std::endl;
//    std::cout << sscanf("1231q.0", "%d", &i_) << std::endl;
//    std::cout << sscanf("-12", "%d", &i_) << std::endl;
//    std::cout << sscanf("1231.0f", "%d", &i_) << std::endl;
//
//    if(sscanf("1231q", "%d", &i_) != 1) {
//        std::cout << "int" << std::endl;
//        return 0;
//    }

//    bool ok;
//    std::string str = "123";
//
//    int i = QString::fromStdString(str).toInt(&ok);
//    if (ok) {
//        std::cout << "int" << std::endl;
//        return;
//    }


//    char *endptr = NULL;
////    if (arg[strlen(arg) - 1] == 'f') { //TODO 123f
////        arg[strlen(arg) - 1] = '\0';
////    }
//
//    long double ld = std::strtold(arg, &endptr);
//    std::cout << "ld: " << ld << std::endl; //delete
//
//    std::cout << "endptr " << *endptr << std::endl;
//
////    if (errno != 0 || arg == endptr || (*endptr != 0 || ())) { //TODO more errors https://stackoverflow.com/questions/26080829/detecting-strtol-failure/26083517
//    if (errno != 0 || arg == endptr || *endptr != 0) { //TODO more errors https://stackoverflow.com/questions/26080829/detecting-strtol-failure/26083517
//        std::cout << "char: impossible" << std::endl;
//        std::cout << "int: impossible" << std::endl;
//        std::cout << "float: impossible" << std::endl;
//        std::cout << "double: impossible" << std::endl;
//        return 0;
//    }
//
//    char c = static_cast<char>(ld);
//    if ((bool)std::isprint(c)) {
//        std::cout << "char: " << c << std::endl;
//    }
//    else {
//        std::cout << "char: Non displayable" << std::endl;
//    }
//
//    int i = static_cast<int>(ld);
//    std::cout << "int: " << i << std::endl;
//
//    float f = static_cast<float>(ld);
//    std::cout << "float: " << f << std::endl;
//
//    double d = static_cast<double>(ld);
//    std::cout << "double: " << d << std::endl;

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
//"1234567.0f   "



//https://stackoverflow.com/questions/7663709/how-can-i-convert-a-stdstring-to-int