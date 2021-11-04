#include <iostream>
#include <string>
#include "Cat.hpp"

class Sorcerer {
    public:
        Sorcerer(void);
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & src);
        ~Sorcerer(void);
        Sorcerer & operator=(Sorcerer const & src);
        std::string getName(void) const;
        void setName(std::string name);
        std::string getTitle(void) const;
        void setTitle(std::string title);
        void polymorph(Victim const & victim) const;

    private:
        std::string _name;
        std::string _title;

};

std::ostream & operator<<( std::ostream & o, Sorcerer const & src);
