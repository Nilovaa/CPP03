#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap created with default constructor!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destroyed!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " created with copy constructor!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << _name << " has no energy left to attack!" << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " gives a high five!" << std::endl;
}