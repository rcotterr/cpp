#include <iostream>
#include <string>
#include "Brain.hpp"


class Human {
    public:
        Human();
        ~Human();
        Brain * identify();
        Brain &getBrain();

    private:
        Brain _brain;
};