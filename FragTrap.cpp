#include "FragTrap.hpp"
#include <iostream>
#include <ostream>
#include <string>

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
    _energy = 100;
    _health = 100;
    _attack = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap Parameter Constructor called" << std::endl;
    _energy = 100;
    _health = 100;
    _attack = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Copy Assignement Operater is called" << std::endl;
    if (&other == this)
        return *this;
    ClapTrap::operator=(other);
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << "Request a High Fives" << std::endl;
}
