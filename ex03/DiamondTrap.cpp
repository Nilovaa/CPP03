#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap created with default constructor!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap " << name << " created with copy constructor!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::highFivesGuys()
{
    FragTrap::highFivesGuys();
}

