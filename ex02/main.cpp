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
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Testing FragTrap Construction/Destruction ===" << std::endl;
    {
        std::cout << "--- FragTrap creation ---" << std::endl;
        FragTrap frag("Fraggy");
        std::cout << std::endl;

        std::cout << "--- FragTrap actions ---" << std::endl;
        frag.attack("Enemy");
        frag.takeDamage(40);
        frag.beRepaired(20);
        frag.highFivesGuys();
        std::cout << std::endl;

        std::cout << "--- FragTrap destruction ---" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "=== Testing all three types ===" << std::endl;
    {
        ClapTrap clap("Clappy");
        ScavTrap scav("Scavvy");
        FragTrap frag("Fragster");
        std::cout << std::endl;

        std::cout << "--- All attack ---" << std::endl;
        clap.attack("Monster");
        scav.attack("Monster");
        frag.attack("Monster");
        std::cout << std::endl;

        std::cout << "--- Special abilities ---" << std::endl;
        scav.guardGate();
        frag.highFivesGuys();
        std::cout << std::endl;

        std::cout << "--- Destruction order (reverse) ---" << std::endl;
    }

    return 0;
}