#include <iostream>
#include <string>

class Enemy
{
    protected:
        int _hp;
        std::string _type;
    public:
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const & src);
        Enemy & operator=(Enemy const & src);
        virtual ~Enemy();
        std::string virtual getType() const;
        int getHP() const;
        virtual void takeDamage(int damage);
};