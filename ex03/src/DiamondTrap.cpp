/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:37 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/30 18:54:08 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
      ScavTrap(name),
      FragTrap(name),
      _name(name)
{
    _hit_points = FragTrap::_hit_points;
    _energy_points = ScavTrap::_energy_points;
    _attack_damage = FragTrap::_attack_damage;
    std::cout << "log - diamondtrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
    : ClapTrap(obj),
      ScavTrap(obj),
      FragTrap(obj)
{
    std::cout << "log - diamondtrap copy constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "log - diamondtrap destructor called." << std::endl;
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& obj)
{
    std::cout << "log - diamondtrap copy assignement operator called." << std::endl;
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << _name << " has the ClapTrap name " << ClapTrap::_name << "!" << std::endl;
    std::cout << std::endl;
}