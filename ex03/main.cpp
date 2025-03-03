/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:37:05 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 14:39:24 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main ()
{ 

    /*Without virtual inheritance, this would result 
    in the Base class being included twice in the Child 
    class, causing ambiguity and redundancy.*/
    ClapTrap baseClass("Base Class");
    ScavTrap parent_one("P1");
    FragTrap parent_two ("P2");
    DiamondTrap child("Child");

    child.whoAmI ();
    child.attack("Random");
    baseClass.attack("Big Me");
    baseClass.takeDamage(7);
    baseClass.beRepaired(1);
    parent_one.attack("Little Robot");
    parent_one.guardGate ();
    parent_two.highFivesGuys ();
    baseClass.attack("Trump");
    baseClass.takeDamage(7);
    baseClass.beRepaired(1);
    parent_one.attack("Trump");
    parent_one.takeDamage(60); 
    parent_one.guardGate ();
    parent_two.attack("Parent"); 
    parent_two.takeDamage(7);
    parent_two.beRepaired(1);
    parent_two.highFivesGuys ();
    return (0);
}
