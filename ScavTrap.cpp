#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default Constrcutor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap Parameter Constrcutor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy Constrcutor called" << std::endl;
    ClapTrap::operator=(other);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy Assignement Operator called" << std::endl;
    if (this != &other)
        return *this;
    ClapTrap::operator=(other);
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
