#include <iostream>
#include <string>


template <typename T>
class Array {
    public:
        Array<T>() {
            this->_len = 0;
            this->_arr = new T[this->_len];
            return;
        };

        Array<T>(unsigned int n) {
            this->_len = n;
            this->_arr = new T[this->_len];
            return;
        };

        Array<T>(Array const & src) {
            *this = src;
            return;
        };

        Array & operator=(Array const & src) {

            this->_len = src.size();
            this->_arr = new T[this->_len];
            for (unsigned int j = 0; j < this->_len; j++) {
                this->_arr[j] = src[j];
            }
            return *this;
        }

        T & operator[](std::size_t idx) const{
            if (idx < 0 || idx >= this->_len) {
                throw std::exception();
            }

            return this->_arr[idx];
        }

        ~Array<T>(){
            delete this->_arr;
            return;
        };

        unsigned int size(void) const {
            return this->_len;
        }

    private:
        T * _arr;
        unsigned int _len;
};

