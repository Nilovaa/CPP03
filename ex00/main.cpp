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
    std::cout << "=== Testing ClapTrap ===" << std::endl;
    std::cout << std::endl;

    std::cout << "--- Construction ---" << std::endl;
    ClapTrap a("Alpha");
    ClapTrap b("Bravo");
    ClapTrap c(a);
    ClapTrap d;
    d = b;
    std::cout << std::endl;

    std::cout << "--- Basic Actions ---" << std::endl;
    a.attack("Bravo");
    b.takeDamage(5);
    b.beRepaired(3);
    std::cout << std::endl;

    std::cout << "--- Taking lethal damage ---" << std::endl;
    a.takeDamage(15);
    a.attack("Bravo");
    a.beRepaired(5);
    std::cout << std::endl;

    std::cout << "--- Energy drain test ---" << std::endl;
    for (int i = 0; i < 12; i++)
        b.attack("Target");
    std::cout << std::endl;

    std::cout << "--- Destruction ---" << std::endl;
    return 0;
}