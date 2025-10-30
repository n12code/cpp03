/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:47:59 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/30 12:56:03 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "log - fragtrap constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout << "log - fragtrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "log - fragtrap destructor called." << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "log - fragtrap copy assignement operator called." << std::endl;
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return (*this);
}

void FragTrap::highFivesGuys() const
{
    std::cout << "FragTrap " << this->_name << " kindly asks for a high-five!" << std::endl;
    std::cout << std::endl;
}