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
    ScavTrap scav("Scavvv");
    std::cout << std::endl;

    scav.attack("Enemy");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();
    std::cout << std::endl;

    ScavTrap scav2(scav);
    scav2.attack("Monster");
    std::cout << std::endl;

    ClapTrap clap("Clappp");
    ScavTrap scav3("Scavvvvvv");
    std::cout << std::endl;

    clap.attack("Target");
    scav3.attack("Target");
    std::cout << std::endl;

    ScavTrap scav4("Scavvvvvvvv");
    scav4.takeDamage(150);
    scav4.attack("Nobody");
    scav4.beRepaired(5);
    std::cout << std::endl;

    return 0;
}