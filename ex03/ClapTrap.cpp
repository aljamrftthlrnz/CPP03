/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:36:59 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/03 12:16:33 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

/* ___ ORTHODOX CANONICAL FORM ___*/
ClapTrap::ClapTrap () : _name(""), hitPoints (10), energyPoints (10), attackDamage (0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap (const std::string name) : _name(name),  hitPoints (10), energyPoints (10), attackDamage (0) {
    std::cout << "ClapTrap param constructor called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &o) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = o;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl; 
}

ClapTrap &ClapTrap::operator=(const ClapTrap &o)
{
    if(this != &o)
    {
        this->_name = o._name;
        this->hitPoints = o.hitPoints;
        this->energyPoints = o.energyPoints;
        this->attackDamage = o.attackDamage;
    }
    std::cout << "ClapTrap copy assignment operator called" << std::endl; 
    return *this; 
}

/* ___ MEMBER FUNCTIONS ___*/
void ClapTrap::attack(const std::string& target)
{
    if(hitPoints > 0 && energyPoints > 0)
    {
        energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ". AD: " << attackDamage 
        << " | EP: " << energyPoints << " | HP: " << hitPoints << std::endl ;
    }
    else 
        std::cout << "ClapTrap " << this->_name << " unable to attack " << target << ", causing no Damage!" << std::endl ;
}

void ClapTrap::takeDamage (unsigned int amount) 
{
    if(hitPoints > 0 && hitPoints > amount)
    {
        hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " takes Damage. HP: " << hitPoints << " EP: " << energyPoints << std::endl;
    }
    else 
        std::cout << "ClapTrap " << this->_name << " can't take any more damage " << std::endl;
}

void ClapTrap::beRepaired (unsigned int amount)
{
    if(energyPoints > 0)
    {
        hitPoints += amount; 
        energyPoints--;
        std::cout << "ClapTrap " << this->_name << " in repair-mode. EP: " << energyPoints << " | HP: " << hitPoints << std::endl; 
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't repair, too little energy points" << std::endl;
}

