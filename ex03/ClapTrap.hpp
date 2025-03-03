/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:37:02 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 15:24:02 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <iomanip>

class ClapTrap {
    protected : 
        std::string     _name; 
        unsigned int    hitPoints; 
        unsigned int    energyPoints;
        unsigned int    attackDamage;  
    public :
        ClapTrap ();
        ClapTrap (const std::string name) ;
        ClapTrap (const ClapTrap &o);
        ClapTrap& operator=(const ClapTrap &o) ;
        ~ClapTrap ();
    
        virtual void    attack (const std::string& target);
        void            takeDamage (unsigned int amount) ;
        void            beRepaired (unsigned int amount) ;
        
};