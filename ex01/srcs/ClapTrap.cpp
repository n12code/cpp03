/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:24 by nbodin            #+#    #+#             */
/*   Updated: 2026/01/20 17:04:32 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : name(name), 
      hit_points(10), 
      energy_points(10), 
      attack_damage(0)
{
    std::cout << "log - claptrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) 
    : name(obj.name), 
      hit_points(obj.hit_points), 
      energy_points(obj.energy_points), 
      attack_damage(obj.attack_damage)
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
    this->name = obj.name;
    this->hit_points = obj.hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy_points == 0)
        std::cout << "ClapTrap " << this->name << " has no energy points left, it can´t perform an attack!" << std::endl;
    else if (this->hit_points == 0)
        std::cout << "ClapTrap " << this->name << " has no hit points left, it can´t perform an attack!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
        std::cout << "ClapTrap " << this->name << " has " << this->energy_points << " energy points left!" << std::endl;
    }
    std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0)
        std::cout << "ClapTrap " << this->name << " has already lost all its hit points!" << std::endl; 
    else
    {
        std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage! Ouch!"<< std::endl; 
        this->hit_points -= amount;
        std::cout << "ClapTrap " << this->name << " has " << this->hit_points << " hit points left!" << std::endl;
    }
    std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points == 0)
        std::cout << "ClapTrap " << this->name << " has no energy points left, it can´t be repaired!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name << " repaired itself! It regained " << amount << " hit points!" << std::endl;
        this->hit_points += amount;
        this->energy_points--;
        std::cout << "ClapTrap " << this->name << " has " << this->hit_points << " hit points and " << this->energy_points << " energy points left!" << std::endl;
    }
    std::cout << std::endl;
}





