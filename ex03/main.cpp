#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    DiamondTrap a("bob");
    std::cout << "-------------------" << std::endl;
    DiamondTrap b = a;
    std::cout << "-------------------" << std::endl;
    DiamondTrap c;
    std::cout << "-------------------" << std::endl;
    b = a;

    std::cout << "-------------------" << std::endl;
    a.whoAmI();
    b.whoAmI();
    c.whoAmI();
    std::cout << "-------------------" << std::endl;
    a.attack("hello");
    a.beRepaired(50);
    a.guardGate();
    a.highFivesGuys();
    a.takeDamage(10);
    std::cout << "-------------------" << std::endl;
    return 0;
}
