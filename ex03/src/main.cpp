/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:26 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/04 11:22:50 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"
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

    FragTrap    jason("Jason");
    FragTrap    jaja(jason);
    FragTrap    timmy = jason;
    timmy = FragTrap("Timmy");

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

    jason.attack("Timmy");
    jason.takeDamage(6);
    jason.beRepaired(6);

    jaja.attack("Timmy");
    jaja.takeDamage(6);
    jaja.beRepaired(8);
    jaja.takeDamage(6);
    jaja.beRepaired(4);

    std::cout << std::endl;

    bryan.attack("Bob");
    bryan.guardGate();
    
    std::cout << std::endl;

    jason.attack("Dylan");
    timmy.highFivesGuys();
    
    std::cout << std::endl;

    DiamondTrap diamond("Diamond");
    DiamondTrap diamond_bis(diamond);

    std::cout << std::endl;
     
    diamond.attack("Diamond");
    diamond_bis.highFivesGuys();
    diamond_bis.guardGate();
    diamond.whoAmI();
    
    return (0);
}