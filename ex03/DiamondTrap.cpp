/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:05:07 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 15:39:59 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () : ClapTrap(), ScavTrap (), FragTrap () {
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap () {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap param constructor called" << std::endl;
} 

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &o)
{
    if(this != &o)
    {
        this->name = o.name;
        this->hitPoints = o.hitPoints;
        this->energyPoints = o.energyPoints;
        this->attackDamage = o.attackDamage; 
    }
    return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &o) {
    *this = o; 
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target); 
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTraps name is ' " << this->name << " ' "<< std::endl;
    std::cout << "ClapTraps name is ' " << ClapTrap::_name << " ' "<< std::endl;
}