/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:26 by nbodin            #+#    #+#             */
/*   Updated: 2026/01/20 17:04:25 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap    bob("Bob");
    ClapTrap    bobby(bob);
    ClapTrap    jimmy = bob;

    jimmy = ClapTrap("Jimmy");

    std::cout << std::endl;
    
    bob.attack("Jimmy");
    bob.takeDamage(6);
    bob.beRepaired(6);

    bobby.attack("Jimmy");
    bobby.takeDamage(6);
    bobby.beRepaired(8);
    bobby.takeDamage(6);
    bobby.beRepaired(4);
    
    return (0);
}