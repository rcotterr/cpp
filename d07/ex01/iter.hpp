#include <iostream>
#include <string>


template <typename T>
void   iter(T * const arr_address, int len, void (*foo)(T const &)) {
    for (int i = 0; i < len; i++) {
	    T var = arr_address[i];
        foo(var);
    }
    return;
}


