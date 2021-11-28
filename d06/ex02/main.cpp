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



int main(void) {
    Base base = Base();
    A a = A();
    B b = B();
    C c = C();

    int n = 7;
    Base * some_rand_class;
    for (int i = 0; i < n; i++) {
	    some_rand_class = generate();
	    std::cout << "some_rand_class type is: " << std::endl;
	    identify(some_rand_class);
	    delete some_rand_class;
    }


    return 0;
}
