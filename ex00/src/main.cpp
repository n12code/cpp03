/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:26 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/29 17:15:09 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
    ClapTrap    bob("Bob");
    ClapTrap    bobby(bob);
    ClapTrap    jimmy = bob;

    jimmy = bobby;

    bob.attack("Jimmy");
    bob.takeDamage(6);
    bob.beRepaired(6);

    bobby.attack("Jimmy");
    bobby.takeDamage(6);
    bobby.beRepaired(8);
    bobby.takeDamage(6);
    bobby.beRepaired(4);

    jimmy.attack("Bob");
    jimmy.takeDamage(9);
    jimmy.beRepaired(1);
    jimmy.beRepaired(1);
    jimmy.beRepaired(1);
    jimmy.beRepaired(1);
    jimmy.beRepaired(1);
    jimmy.beRepaired(1);
    jimmy.beRepaired(1);
    jimmy.beRepaired(1);
    jimmy.beRepaired(1);
    jimmy.attack("Bob");

    return (0);
}