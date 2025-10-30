/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:26 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/30 12:57:12 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap    bob("Bob");
    ClapTrap    bobby(bob);
    ClapTrap    jimmy = bob;
    jimmy = ClapTrap("Jimmy");

    std::cout << std::endl;

    ScavTrap    bryan("Bryan");
    ScavTrap    brybry(bryan);
    ScavTrap    dylan = bryan;
    dylan = ScavTrap("Dylan");

    std::cout << std::endl;

    bob.attack("Jimmy");
    bob.takeDamage(6);
    bob.beRepaired(6);

    bobby.attack("Jimmy");
    bobby.takeDamage(6);
    bobby.beRepaired(8);
    bobby.takeDamage(6);
    bobby.beRepaired(4);

    std::cout << std::endl;

    bryan.attack("Dylan");
    bryan.takeDamage(6);
    bryan.beRepaired(6);

    brybry.attack("Dylan");
    brybry.takeDamage(6);
    brybry.beRepaired(8);
    brybry.takeDamage(6);
    brybry.beRepaired(4);

    std::cout << std::endl;

    bryan.attack("Bob");
    bryan.guardGate();
    return (0);
}