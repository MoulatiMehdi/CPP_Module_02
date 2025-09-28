#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>
#include <string>

/**********************************************************************************/
/**********************************************************************************/
/****************************     CONSTRUCTORS *******************************/
/**********************************************************************************/
/**********************************************************************************/

ClapTrap::ClapTrap() : _name(""), _health(10), _energy(10), _attack(0)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name),
      _health(10),
      _energy(10),
      _attack(0)
{
    std::cout << "Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other._name),
      _health(other._health),
      _energy(other._energy),
      _attack(other._attack)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

/**********************************************************************************/
/**********************************************************************************/
/****************************      OPERATORS *******************************/
/**********************************************************************************/
/**********************************************************************************/

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy Assignement Operater is called" << std::endl;
    if (&other == this)
        return *this;
    _health = other._health;
    _name   = other._name;
    _attack = other._attack;
    _energy = other._energy;
    return *this;
}

/**********************************************************************************/
/**********************************************************************************/
/****************************      FUNCTIONS *******************************/
/**********************************************************************************/
/**********************************************************************************/

void ClapTrap::attack(const std::string &target)
{
    if (_health == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack : already dead"
                  << std::endl;
        return;
    }
    if (_energy == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack : no enery point"
                  << std::endl;
        return;
    }
    _energy -= 1;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
              << _attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_health == 0)
    {
        std::cout << "ClapTrap " << _name << " can't take damage : already dead"
                  << std::endl;
        return;
    }
    if (_health > amount)
        _health -= amount;
    else
        _health = 0;
    std::cout << "ClapTrap " << _name << " has been attacked , losing " << amount
              << " points of health!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_health == 0)
    {
        std::cout << "ClapTrap " << _name
                  << " can't repair himself: already dead" << std::endl;
        return;
    }
    if (_energy == 0)
    {
        std::cout << "ClapTrap " << _name
                  << " can't repair himself: no enery point" << std::endl;
        return;
    }
    _health += amount;
    _energy -= 1;
    std::cout << "ClapTrap " << _name << " repair himself, gainning " << amount
              << " points of health!" << std::endl;
}
