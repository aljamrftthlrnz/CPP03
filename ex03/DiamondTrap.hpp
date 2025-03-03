/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:05:10 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 15:20:59 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp" 
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap {
    private :
        std::string name; 
    public : 
        DiamondTrap ();
        DiamondTrap (const std::string& name);
        DiamondTrap (const DiamondTrap &o);
        DiamondTrap& operator=(const DiamondTrap &o); 
        ~DiamondTrap (); 
        
        void attack (const std::string& target) ; 
        void whoAmI(); 
}; 