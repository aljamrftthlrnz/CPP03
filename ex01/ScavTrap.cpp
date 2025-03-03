/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:03:34 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 12:36:01 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap () {
    std::cout << "ScavTrap default constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20; 
}

ScavTrap::ScavTrap (const std::string name) : ClapTrap (name) {
    std::cout << "ScavTrap param constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;        
} 

ScavTrap::ScavTrap (const ScavTrap &o) : ClapTrap(o) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = o;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &o)
{
    if(this != &o)
    {
        this->_name = o._name;
        this->energyPoints = o.energyPoints;
        this->attackDamage = o.attackDamage;
        this->hitPoints = o.hitPoints;
    }
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
} 

ScavTrap::~ScavTrap () {
        std::cout << "ScavTrap destructor called" << std::endl; 
}

void ScavTrap::guardGate ()
{
    if (energyPoints < 49)
        std::cout << "ScavTrap is in gate keeper mode" << std::endl;
    else 
        std::cout << "ScavTrap ready to attack!" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
    if(hitPoints > 0 && energyPoints > 0)
    {
        energyPoints--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ". AD: " << attackDamage 
        << " | EP: " << energyPoints << " | HP: " << hitPoints << std::endl ;
    }
    else 
        std::cout << "ScavTrap " << this->_name << " unable to attack " << target << ". Please activate gate-keeper mode." << std::endl ;
    
}