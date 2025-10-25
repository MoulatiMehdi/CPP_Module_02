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
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(),
      ScavTrap(other),
      FragTrap(other),
      _name(other._name)
{
}

DiamondTrap::DiamondTrap(const std::string &name)
    : DiamondTrap::ClapTrap(name + "_clap_name"),
      DiamondTrap::ScavTrap(name),
      DiamondTrap::FragTrap(name),
      _name(name)
{
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
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
    std::cout << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << _name << " " << ClapTrap::_name << std::endl;
}
