/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:37:05 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 13:45:07 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main ()
{ 
    ClapTrap rob("Parent");
    ScavTrap robot("Child 1");
    FragTrap robby ("Child 2");

    rob.attack("Trump");
    rob.takeDamage(7);
    rob.beRepaired(1);
    robot.attack("Trump");
    robot.takeDamage(60); 
    robot.guardGate ();
    robby.attack("Parent"); 
    robby.takeDamage(7);
    robby.beRepaired(1);
    robby.highFivesGuys ();
    return (0);
}
