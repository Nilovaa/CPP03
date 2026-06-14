/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:22:43 by nyrakoto          #+#    #+#             */
/*   Updated: 2026/06/11 17:22:45 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Testing Construction/Destruction Chaining ===" << std::endl;
    std::cout << std::endl;

    {
        std::cout << "--- ScavTrap parameterized constructor ---" << std::endl;
        ScavTrap scav("Serena");
        std::cout << std::endl;

        std::cout << "--- ScavTrap actions ---" << std::endl;
        scav.attack("Enemy");
        scav.takeDamage(30);
        scav.beRepaired(10);
        scav.guardGate();
        std::cout << std::endl;

        std::cout << "--- ScavTrap copy constructor ---" << std::endl;
        ScavTrap scav2(scav);
        scav2.attack("Another Enemy");
        std::cout << std::endl;

        std::cout << "--- Destruction (reverse order) ---" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "=== Testing ClapTrap alongside ScavTrap ===" << std::endl;
    {
        ClapTrap clap("Clappy");
        ScavTrap scav("Scavvy");
        std::cout << std::endl;

        clap.attack("Target");
        scav.attack("Target");
        std::cout << std::endl;

        std::cout << "--- Destruction order ---" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "=== Testing lethal damage ===" << std::endl;
    {
        ScavTrap scav("Tank");
        scav.takeDamage(150);
        scav.attack("Nobody");
        scav.beRepaired(5);
        std::cout << std::endl;
    }

    return 0;
}