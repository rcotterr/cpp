#include <iostream>
#include <string>
#include "Peon.hpp"

class Cat : public Victim {
    public:
        Cat();
        Cat(std::string name);
        Cat(Cat const & src);
        virtual ~Cat(void);
        Cat & operator=(Cat const & src);
        void getPolymorphed(void) const;

};
