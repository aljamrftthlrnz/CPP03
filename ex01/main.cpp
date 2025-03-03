/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:37:05 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 12:36:29 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main ()
{ 
    //ClapTrap rob("Parent");
    ScavTrap robot("Child");

    // rob.attack("Kickl");
    // rob.takeDamage(7);
    // rob.beRepaired(1);
    robot.attack("Trump");
    robot.attack("Trump");
    robot.guardGate ();
    return (0);
}
