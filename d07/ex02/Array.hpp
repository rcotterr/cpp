#include <iostream>
#include <string>



template <typename T>
class Array {
    public:
        Array<T>() {
            std::cout << "constructor0" << std::endl;
            this->_len = 0;
            this->_arr = new int[this->_len];
            return;
        };

        Array<T>(unsigned int n) {
            std::cout << "constructor1" << std::endl;
            this->_len = n;
            this->_arr = new int[this->_len];
            for (unsigned int i = 0; i < this->_len; i++) {
                this->_arr[i] = T();
//                std::cout << this->_arr[i] << std::endl;
            }
            return;
        };


        ~Array<T>(){
            return;
        };
        unsigned int size(void) const {
            return this->_len;
        }

    //TODO Construction by copy and assignment operator. In both cases, modifying one of
    //the two arrays after copy/assignment won’t affect anything in the other array

    //TODO Elements are accessible through the operator[].
    //TODO • When accessing an element with the operator[], if this element is out of the limits,
    //a std::exception is thrown
    private:
        T * _arr;
        unsigned int _len;

};

