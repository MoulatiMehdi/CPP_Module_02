#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap ::DiamondTrap()
    : ClapTrap("unknown_clap_name"),
      ScavTrap(),
      FragTrap(),
      _name("unknown")
{
    std::cout << "DiamondTrap default Constrcutor called" << std::endl;
    _health = FragTrap::HEALTH_POINT;
    _energy = ScavTrap::ENERGY_POINT;
    _attack = FragTrap::ATTACK_POINT;
}

DiamondTrap::DiamondTrap(const std::string &name)
    : DiamondTrap::ClapTrap(name + "_clap_name"),
      DiamondTrap::ScavTrap(name),
      DiamondTrap::FragTrap(name),
      _name(name)
{
    std::cout << "DiamondTrap Parameter Constrcutor called" << std::endl;
    _health = FragTrap::HEALTH_POINT;
    _energy = ScavTrap::ENERGY_POINT;
    _attack = FragTrap::ATTACK_POINT;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(),
      ScavTrap(other),
      FragTrap(other),
      _name(other._name)
{
    std::cout << "DiamondTrap Copy Constrcutor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap Copy Assignement Operator called" << std::endl;
    if (this == &other)
        return *this;
    _name = other._name;
    ClapTrap::operator=(other);
    ScavTrap::operator=(other);
    FragTrap::operator=(other);
    return *this;
}

DiamondTrap ::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << _name << " " << ClapTrap::_name << std::endl;
}
