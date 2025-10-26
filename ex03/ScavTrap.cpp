#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default Constrcutor called" << std::endl;
    this->_health = HEALTH_POINT;
    this->_energy = ENERGY_POINT;
    this->_attack = ATTACK_POINT;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap Parameter Constrcutor called" << std::endl;
    this->_health = HEALTH_POINT;
    this->_energy = ENERGY_POINT;
    this->_attack = ATTACK_POINT;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
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
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode"
              << std::endl;
}
