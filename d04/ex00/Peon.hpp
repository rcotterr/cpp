#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim {
    public:
        Peon(std::string name);
        Peon(Peon const & src);
        ~Peon(void);
        Peon & operator=(Peon const & src);
        void getPolymorphed(void) const;

};
