/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:49:27 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 15:00:00 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap () {
    std::cout << "FragTrap default constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap (const std::string name) : ClapTrap (name) {
    std::cout << "FragTrap param constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap (const FragTrap &o) : ClapTrap (o) {
    *this = o;
}

FragTrap &FragTrap::operator=(const FragTrap &o) {
    if(this != &o)
    {
        this->_name = o._name;
        this->hitPoints = o.hitPoints;
        this->energyPoints = o.energyPoints;
        this->attackDamage = o.attackDamage;
    }
    std::cout << "FragTrap copy assignment operator called" << std::endl; 
    return *this; 
}

FragTrap::~FragTrap () {
        std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys (void) {  
    std::cout << "Hi! Its me FragTrap. Request for high five." << std::endl;
}

void FragTrap::attack(const std::string& target) 
{
    if(hitPoints > 0 && energyPoints > 0)
    {
        energyPoints--;
        std::cout << "FragTrap " << this->_name << " attacks " << target << ". AD: " << attackDamage 
        << " | EP: " << energyPoints << " | HP: " << hitPoints << std::endl ;
    }
    else 
        std::cout << "FragTrap " << this->_name << " unable to attack " << target << ". Please activate gate-keeper mode." << std::endl ;
    
}