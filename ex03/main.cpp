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

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Diamond");
    std::cout << std::endl;

    diamond.whoAmI();
    std::cout << std::endl;

    diamond.attack("Enemy");
    std::cout << std::endl;

    diamond.guardGate();
    diamond.highFivesGuys();
    std::cout << std::endl;

    diamond.takeDamage(50);
    diamond.beRepaired(20);
    std::cout << std::endl;

    DiamondTrap diamond2(diamond);
    diamond2.whoAmI();
    std::cout << std::endl;

    ClapTrap clap("Clappp");
    ScavTrap scav("Scavvv");
    FragTrap frag("Fraggg");
    DiamondTrap diamond3("Diamonddddddd");
    std::cout << std::endl;

    clap.attack("Enemy");
    scav.attack("Enemy");
    frag.attack("Enemy");
    diamond.attack("Enemy");
    std::cout << std::endl;

    return 0;
}