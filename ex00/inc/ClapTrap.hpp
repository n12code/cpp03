/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:35 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/29 17:03:49 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int         _hit_points;
        unsigned int         _energy_points;
        unsigned int         _attack_damage;
    
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& obj);
        ClapTrap&   operator=(const ClapTrap& obj);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    };



#endif