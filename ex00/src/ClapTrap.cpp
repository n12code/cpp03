/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:24 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/29 17:42:27 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : _name(name), 
      _hit_points(10), 
      _energy_points(10), 
      _attack_damage(0)
{
    std::cout << "log - constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) 
    : _name(obj._name), 
      _hit_points(obj._hit_points), 
      _energy_points(obj._energy_points), 
      _attack_damage(obj._attack_damage)
{
    std::cout << "log - copy constructor called." << std::endl;
}
      
ClapTrap::~ClapTrap()
{
    std::cout << "log - destructor called." << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "log - copy assignement operator called." << std::endl;
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
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " has already lost all its hit points!" << std::endl; 
    else
    {
        std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage! Ouch!"<< std::endl; 
        this->_hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    unsigned int    real_amount = amount;
    if (amount > 10 - this->_hit_points)
        real_amount = 10 - this->_hit_points;
    if (this->_energy_points == 0)
        std::cout << "ClapTrap " << this->_name << " has no energy points left, it can´t be repaired!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " repaired itself! It regained " << real_amount << " hit points" << std::endl;
        this->_hit_points += real_amount;
        this->_energy_points--;
    }
}





