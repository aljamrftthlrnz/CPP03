/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:03:39 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 14:58:46 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <iomanip>
# include "ClapTrap.hpp"

// Derived Class does not inherit access to private data members
// However, it doas inherit a full parent object, which contains private members
class ScavTrap : ClapTrap {
    public:
        ScavTrap (); 
        ScavTrap (const std::string name);
        ScavTrap (const ScavTrap &o);
        ScavTrap& operator=(const ScavTrap &o);
        ~ScavTrap ();
        
        void        guardGate ();
        void        attack (const std::string& target) ;
}; 