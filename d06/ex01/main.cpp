#include <iostream>
#include <string>


struct Data {
    char c;
    char b;
};


uintptr_t serialize(Data* ptr) {
    uintptr_t u_prt = reinterpret_cast<uintptr_t>(ptr);
    return u_prt;
}


Data* deserialize(uintptr_t raw) {
    Data * new_d = reinterpret_cast<Data *>(raw);
    return new_d;
}


int main(void) {
    struct Data d = {'c', 'b'};
    Data * d_ptr = &d;

    std::cout << "Data: " << d_ptr << " " << d_ptr->c << " " << d_ptr->b << std::endl;
    uintptr_t u = serialize(d_ptr);
    struct Data * new_d_ptr = deserialize(u);
    std::cout << "Data new : " << new_d_ptr << " " << new_d_ptr->c << " " << new_d_ptr->b << std::endl;
    return 0;
}
