/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:24 by nbodin            #+#    #+#             */
/*   Updated: 2026/01/20 17:05:12 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : _name(name), 
      _hit_points(10), 
      _energy_points(10), 
      _attack_damage(0)
{
    std::cout << "log - claptrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) 
    : _name(obj._name), 
      _hit_points(obj._hit_points), 
      _energy_points(obj._energy_points), 
      _attack_damage(obj._attack_damage)
{
    std::cout << "log - claptrap copy constructor called." << std::endl;
}
      
ClapTrap::~ClapTrap()
{
    std::cout << "log - claptrap destructor called." << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "log - claptrap copy assignement operator called." << std::endl;
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy_points == 0)
        std::cout << "ClapTrap " << this->_name << " has no energy points left, it can´t perform an attack!" << std::endl;
    else if (this->_hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " has no hit points left, it can´t perform an attack!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_points--;
        std::cout << "ClapTrap " << this->_name << " has " << this->_energy_points << " energy points left!" << std::endl;
    }
    std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " has already lost all its hit points!" << std::endl; 
    else
    {
        std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage! Ouch!"<< std::endl; 
        this->_hit_points -= amount;
        std::cout << "ClapTrap " << this->_name << " has " << this->_hit_points << " hit points left!" << std::endl;
    }
    std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points == 0)
        std::cout << "ClapTrap " << this->_name << " has no energy points left, it can´t be repaired!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " repaired itself! It regained " << amount << " hit points!" << std::endl;
        this->_hit_points += amount;
        this->_energy_points--;
        std::cout << "ClapTrap " << this->_name << " has " << this->_hit_points << " hit points and " << this->_energy_points << " energy points left!" << std::endl;
    }
    std::cout << std::endl;
}





