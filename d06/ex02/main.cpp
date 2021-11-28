#include <iostream>
#include <string>
#include "Base.hpp"

bool DEBUG = false;

Base * create_A() {
    if (DEBUG) {
        std::cout << "generate A" << std::endl;
    }
    A * a = new A();
    Base * a_ptr = a;
    return a_ptr;
}

Base * create_B() {
    if (DEBUG) {
        std::cout << "generate B" << std::endl;
    }
    B * b = new B();
    Base * b_ptr = b;
    return b_ptr;
}

Base * create_C() {
    if (DEBUG) {
        std::cout << "generate C" << std::endl;
    }
    C * c = new C();
    Base * c_ptr = c;
    return c_ptr;
}

Base * generate(void) {
    const int size = 3;
    typedef Base* (*MakeClasses)();

	MakeClasses array[size] = {&create_A, &create_B, &create_C};
	MakeClasses make_class = array[std::rand() % size];
	Base * cl = make_class();
    return cl;
}


void identify(Base* p) {
    A * a = dynamic_cast<A*>(p);
    if (a != NULL) {
        std::cout << "A" << std::endl;
        return;
    }
    B * b = dynamic_cast<B*>(p);
    if (b != NULL) {
        std::cout << "B" << std::endl;
        return;
    }
    C * c = dynamic_cast<C*>(p);
    if (c != NULL) {
        std::cout << "C" << std::endl;
        return;
    }
}


void identify(Base& p) {
    try {
        A & a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return;
    }
    catch (std::bad_cast bc){
        (void)bc;
    }
    try {
        B & b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return;
    }
    catch (std::bad_cast bc){
        (void)bc;
    }
    try {
        C & c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
        return;
    }
    catch (std::bad_cast bc){
        (void)bc;
    }
}


int main(void) {
    Base base = Base();
    A a = A();
    B b = B();
    C c = C();

    std::cout << "***Check for pointer***" << std::endl;
    int n = 7;
    Base * some_rand_class_ptr;
    for (int i = 0; i < n; i++) {
	    some_rand_class_ptr = generate();
	    std::cout << "some_rand_class type is: " << std::endl;
	    identify(some_rand_class_ptr);
	    delete some_rand_class_ptr;
    }
    std::cout << std::endl;

    std::cout << "***Check for reference***" << std::endl;
    Base * base_ptr;
    for (int i = 0; i < n; i++) {
	    base_ptr = generate();
	    Base & some_rand_class_ref = dynamic_cast<Base & >(*base_ptr);

	    std::cout << "some_rand_class type is: " << std::endl;
	    identify(some_rand_class_ref);
	    delete base_ptr;
    }


    return 0;
}
//TODO Makefile