#include <iostream>
#include <string>

class Victim {
    public:
        Victim();
        Victim(std::string name);
        Victim(Victim const & src);
        virtual ~Victim(void);
        Victim & operator=(Victim const & src);
        std::string getName(void) const;
        void setName(std::string name);
        virtual void getPolymorphed(void) const;

    protected:
        std::string _name;
};

std::ostream & operator<<( std::ostream & o, Victim const & src);