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

#include "ClapTrap.hpp"

int main()
{
    DiamondTrap diamond("Diamonddddd");
    diamond.attack("Target1");
    diamond.takeDamage(5);
    diamond.beRepaired(3);
    diamond.takeDamage(10);
    diamond.attack("Target2");
    diamond.highFivesGuys();

    return 0;
}