#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
}

HumanB::~HumanB(void)
{
}

void    HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}

void	HumanB::attack(void)
{
    if (!this->weapon)
        std::cout << this->name << " has no weapon" << std::endl;
    else
        std::cout   << this->name << " attacks with their " << weapon->getType() << std::endl;
}
