/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:22:20 by nyrakoto          #+#    #+#             */
/*   Updated: 2026/06/11 17:22:22 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " created with default constructor!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " created with copy constructor!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " has no energy left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Remaining hit points: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0)
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points! Current hit points: " << _hitPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " has no energy left to repair!" << std::endl;
    }
}

