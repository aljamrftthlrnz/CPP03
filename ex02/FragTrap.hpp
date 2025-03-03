/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:49:36 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 15:00:18 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap (); 
        FragTrap (const std::string name); 
        FragTrap (const FragTrap &o);
        FragTrap& operator=(const FragTrap &o); 
        ~FragTrap ();

        void highFivesGuys(void);
        void attack(const std::string& target);
    
};