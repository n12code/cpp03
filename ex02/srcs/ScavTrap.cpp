/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:24:15 by nbodin            #+#    #+#             */
/*   Updated: 2026/01/20 17:05:07 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
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
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy_points == 0)
        std::cout << "ScavTrap " << this->_name << " has no energy points left, it can´t perform an attack!" << std::endl;
    else if (this->_hit_points == 0)
        std::cout << "ScavTrap " << this->_name << " has no hit points left, it can´t perform an attack!" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_points--;
        std::cout << "ScavTrap " << this->_name << " has " << this->_energy_points << " energy points left!" << std::endl;
    }
    std::cout << std::endl;
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << this->_name << " is now in gatekeeper mode!" << std::endl;
    std::cout << std::endl;
}