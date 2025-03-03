/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:37:05 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 12:19:12 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main ()
{
    ClapTrap a;
    a = ClapTrap("Wall-E");
    
    a.attack("Little Robot");
    a.takeDamage(5); 
    a.beRepaired(1);
    a.attack("Little Robot");
    a.takeDamage(8);
    return (0);
}
