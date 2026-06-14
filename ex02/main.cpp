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
    FragTrap frag("fraggggggg");
    frag.attack("Target1");
    frag.takeDamage(5);
    frag.beRepaired(3);
    frag.takeDamage(10);
    frag.attack("Target2");
    frag.highFivesGuys();
    
    return 0;
}