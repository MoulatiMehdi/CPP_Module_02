#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int main()
{
    ClapTrap a("jon");
    ClapTrap b;
    ClapTrap c(a);

    b = a;

    for (int i = 0; i < 11; i++)
        a.beRepaired(10);
    a.attack("Name");

    std::cout << std::string(50, '-') << std::endl;

    for (int i = 0; i < 11; i++)
        b.takeDamage(10);
    b.attack("Name");

    std::cout << std::string(50, '-') << std::endl;

    for (int i = 0; i < 11; i++)
        c.attack("TEST");
    return 0;
}
