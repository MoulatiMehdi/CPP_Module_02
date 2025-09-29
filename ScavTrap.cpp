#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap(), _isGateKeeper(false)
{
    std::cout << "ScavTrap default Constrcutor called" << std::endl;
    this->_health = 100;
    this->_energy = 50;
    this->_attack = 20;
}

ScavTrap::ScavTrap(const std::string &name)
    : ClapTrap(name),
      _isGateKeeper(false)
{
    std::cout << "ScavTrap Parameter Constrcutor called" << std::endl;
    this->_health = 100;
    this->_energy = 50;
    this->_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
    : ClapTrap(other),
      _isGateKeeper(other._isGateKeeper)
{
    std::cout << "ScavTrap Copy Constrcutor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy Assignement Operator called" << std::endl;
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    _isGateKeeper = other._isGateKeeper;
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (_health == 0)
    {
        std::cout << "ScavTrap " << _name
                  << " is not able to attack : already dead" << std::endl;
        return;
    }
    if (_energy == 0)
    {
        std::cout << "ScavTrap " << _name
                  << " is not able to attack : no enery point" << std::endl;
        return;
    }
    _energy -= 1;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
              << _attack << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (_isGateKeeper)
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
    else
        std::cout << "ScavTrap is now is not in Gate keeper mode" << std::endl;
}
