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
    DiamondTrap diamond;

    diamond.attack("Enemy");
    std::cout << std::endl;
    diamond.takeDamage(30);
    std::cout << std::endl;
    diamond.beRepaired(10);
    std::cout << std::endl;
    diamond.guardGate();
    std::cout << std::endl;
    diamond.highFivesGuys();
    std::cout << std::endl;
    diamond.whoAmI();
    // std::cout << "=== Testing DiamondTrap Construction ===" << std::endl;
    // {
    //     std::cout << "--- Creating DiamondTrap ---" << std::endl;
    //     DiamondTrap diamond("Diamond");
    //     std::cout << std::endl;

    //     std::cout << "--- whoAmI (shows both names) ---" << std::endl;
    //     diamond.whoAmI();
    //     std::cout << std::endl;

    //     std::cout << "--- attack (uses ScavTrap::attack) ---" << std::endl;
    //     diamond.attack("Enemy");
    //     std::cout << std::endl;

    //     std::cout << "--- Inherited abilities ---" << std::endl;
    //     diamond.guardGate();
    //     diamond.highFivesGuys();
    //     std::cout << std::endl;

    //     std::cout << "--- Taking damage and repairing ---" << std::endl;
    //     diamond.takeDamage(50);
    //     diamond.beRepaired(20);
    //     std::cout << std::endl;

    //     std::cout << "--- Copy constructor ---" << std::endl;
    //     DiamondTrap diamond2(diamond);
    //     diamond2.whoAmI();
    //     std::cout << std::endl;

    //     std::cout << "--- Destruction (reverse order) ---" << std::endl;
    // }
    // std::cout << std::endl;

    // std::cout << "=== Testing all types together ===" << std::endl;
    // {
    //     ClapTrap clap("Clappy");
    //     ScavTrap scav("Scavvy");
    //     FragTrap frag("Fragster");
    //     DiamondTrap diamond("Sparkle");
    //     std::cout << std::endl;

    //     std::cout << "--- All attack ---" << std::endl;
    //     clap.attack("Monster");
    //     scav.attack("Monster");
    //     frag.attack("Monster");
    //     diamond.attack("Monster");
    //     std::cout << std::endl;

    //     std::cout << "--- Destruction order ---" << std::endl;
    // }

    return 0;
}