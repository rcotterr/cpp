#include <iostream>
#include <string>
#include <typeinfo>
#include "Base.hpp"


Base * create_A() {
    Base a = A();
    Base * a_ptr = &a;
    return a_ptr;
}

Base * create_B() {
    Base b = B();
    Base * b_ptr = &b;
    return b_ptr;
}

Base * create_C() {
    Base c = C();
    Base * c_ptr = &c;
    return c_ptr;
}

Base * generate(void) {
    const int size = 3;
    typedef Base* (*MakeClasses)();

	MakeClasses array[size] = {&create_A, &create_B, &create_C};
	std::cout << std::rand() % size << std::endl;
	MakeClasses make_class = array[std::rand() % size];
	Base * cl = make_class();
    return cl;
}


void identify(Base* p) {
    std::cout << "0" << std::endl;
    A * a = dynamic_cast<A*>(p);
    std::cout << "2" << std::endl;
    if (a != NULL) {
        std::cout << "A" << std::endl;
        return;
    }
    std::cout << "3" << std::endl;
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

//    Base * some_rand_class1 = generate();
////    std::cout << some_rand_class1 << " " << typeid(some_rand_class1).name() << std::endl;
//
//    Base * some_rand_class2 = generate();
//    std::cout << some_rand_class2 << std::endl;
//
//    Base * some_rand_class3 = generate();
//    std::cout << some_rand_class3 << std::endl;
//
//    Base * some_rand_class4 = generate();
//    std::cout << some_rand_class4 << std::endl;


//    int n = 5;
//    Base * some_rand_class;
//    for (int i = 0; i < n; i++) {
//	    some_rand_class = generate();
//	    std::cout << some_rand_class << std::endl;
//	    identify(some_rand_class);
//    }

    Base * base_prt_a = &a;
    A * a_new = dynamic_cast<A*>(base_prt_a);
    B * b_new = dynamic_cast<B*>(base_prt_a);
    identify(base_prt_a);

    Base * base_prt_b = &b;
    identify(base_prt_b);

    std::cout << a_new << std::endl;
    std::cout << b_new << std::endl;


    Base * some_rand_class = generate();
    identify(some_rand_class);

    return 0;
}
