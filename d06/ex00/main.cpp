#include <iostream>
#include <string>
#include <iomanip>


void output_char(char c) {
    if ((bool)std::isprint(c)) {
        std::cout << "char: " << c << std::endl;
    }
    else {
        std::cout << "char: Non displayable" << std::endl;
    }
}


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
    if (n > CHAR_MAX || n < CHAR_MIN) {
        std::cout << "char: impossible" << std::endl;
    }
    else {
        output_char(c);
    }

    std::cout << "int: " << n << std::endl;

    float f = static_cast<float>(n);
    std::cout << "float: " << f << ".0f" << std::endl;

    double d = static_cast<double>(n);
    std::cout << "double: " << d << ".0" << std::endl;
}


bool is_float(char * arg) {
    char *end;
    float  f;
    errno = 0;
    f = std::strtof(arg, &end);
    if (errno == ERANGE) {
        return false;
    }
    if (*arg == '\0' || *end != 'f' || *(end+1) != '\0') {
        return false;
    }
    return true;
}

void process_float(float f) {

    char c = static_cast<char>(f);
    if (f > CHAR_MAX || f < CHAR_MIN) {
        std::cout << "char: impossible" << std::endl;
    }
    else {
        output_char(c);
    }

    int n = static_cast<int>(f);
    if (f > INT_MAX || f < INT_MIN) {
        std::cout << "int: impossible" << std::endl;
    }
    else {
        std::cout << "int: " << n << std::endl;
    }

    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;

    double d = static_cast<double>(f);
    std::cout << "double: " << d << std::endl;
}


bool is_double(char * arg) {
    char *end;
    double  d;
    errno = 0;
    d = std::strtod(arg, &end);
    if (errno == ERANGE) {
        return false;
    }
    if (*arg == '\0' || *end != '\0') {
        return false;
    }
    return true;
}


void process_double(double d) {

    char c = static_cast<char>(d);
    if (d > CHAR_MAX || d < CHAR_MIN) {
        std::cout << "char: impossible" << std::endl;
    }
    else {
        output_char(c);
    }

    int n = static_cast<int>(d);
    if (d > INT_MAX || d < INT_MIN) {
        std::cout << "int: impossible" << std::endl;
    }
    else {
        std::cout << "int: " << n << std::endl;
    }

    float f = static_cast<float>(d);
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;

    std::cout << "double: " << d << std::endl;

}

bool convert(char * arg) {
    if (is_displayable_char(arg)) {
        process_char(arg[0]);
        return true;
    }
    if (is_int(arg)) {
        std::cout << "is int" << std::endl;
        int n = std::stoi(arg);
        process_int(n);
        return true;
    }
    if (is_float(arg)) {
        std::cout << "is float" << std::endl;
        float f = std::stof(arg);
        std::cout << "float: " << f << std::endl;
        process_float(f);
        return true;
    }
    if (is_double(arg)) {
        std::cout << "is double" << std::endl;
        double d = std::stod(arg);
        process_double(d);
        return true;
    }
    return false;
}



int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "must provide one arg" << std::endl;
        return 0;
    }
    char * arg = argv[1];
    std::cout << arg << std::endl;

    bool ok = convert(arg);
    if (!ok) {
        std::cout << "invalid input" << std::endl;
    }

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
//./convert 12345678 ??? -- char: N



//https://stackoverflow.com/questions/7663709/how-can-i-convert-a-stdstring-to-int