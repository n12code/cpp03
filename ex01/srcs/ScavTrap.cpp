/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:24:15 by nbodin            #+#    #+#             */
/*   Updated: 2026/01/20 17:13:39 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "log - scavtrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout << "log - scavtrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "log - scavtrap destructor called." << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "log - scavtrap copy assignement operator called." << std::endl;
    this->name = obj.name;
    this->hit_points = obj.hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy_points == 0)
        std::cout << "ScavTrap " << this->name << " has no energy points left, it can´t perform an attack!" << std::endl;
    else if (this->hit_points == 0)
        std::cout << "ScavTrap " << this->name << " has no hit points left, it can´t perform an attack!" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
        std::cout << "ScavTrap " << this->name << " has " << this->energy_points << " energy points left!" << std::endl;
    }
    std::cout << std::endl;
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << this->name << " is now in gatekeeper mode!" << std::endl;
    std::cout << std::endl;
}