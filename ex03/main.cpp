#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int main()
{
    DiamondTrap a("bob");
    DiamondTrap b = a;
    DiamondTrap c;

    b = a;

    std::cout << std::string(50, '-') << std::endl;
    ClapTrap *ct = &a;
    FragTrap *ft = &a;
    ScavTrap *st = &a;

    a.whoAmI();

    std::cout << std::string(50, '-') << std::endl;
    a.attack("hello");
    ct->attack("hello");
    st->attack("hello");
    ft->attack("hello");

    std::cout << std::string(50, '-') << std::endl;
    a.beRepaired(50);
    ct->beRepaired(50);
    st->beRepaired(50);
    ft->beRepaired(50);

    std::cout << std::string(50, '-') << std::endl;
    a.takeDamage(10);
    ct->takeDamage(10);
    st->takeDamage(10);
    ft->takeDamage(10);

    std::cout << std::string(50, '-') << std::endl;
    a.guardGate();
    st->guardGate();

    std::cout << std::string(50, '-') << std::endl;
    a.highFivesGuys();
    ft->highFivesGuys();

    return 0;
}
