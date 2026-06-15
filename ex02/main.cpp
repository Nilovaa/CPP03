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
    FragTrap frag("Fraggg");
    std::cout << std::endl;
    
    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();
    std::cout << std::endl;
    
    ClapTrap clap("Clappp");
    ScavTrap scav("Scavvv");
    FragTrap frag2("Fragggggg");
    std::cout << std::endl;
    
    clap.attack("Monster");
    scav.attack("Monster");
    frag2.attack("Monster");
    std::cout << std::endl;
    
    scav.guardGate();
    frag2.highFivesGuys();
    std::cout << std::endl;

    return 0;
}