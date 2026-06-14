#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap created with default constructor!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " created with copy constructor!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " has no energy left to attack!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now guarding the gate!" << std::endl;
}

