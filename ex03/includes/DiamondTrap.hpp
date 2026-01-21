/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:22:17 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/04 11:31:59 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "./ClapTrap.hpp"
# include "./FragTrap.hpp"
# include "./ScavTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
       std::string  _name;
        
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& obj);
        ~DiamondTrap();
        DiamondTrap&    operator=(const DiamondTrap& obj);
        void attack(const std::string& target);
        void whoAmI();

};

#endif