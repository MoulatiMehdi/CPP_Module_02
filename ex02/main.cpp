#include "FragTrap.hpp"
#include <iostream>
#include <string>

int main()
{
    std::string line(50, '-');

    FragTrap a("Bob");
    FragTrap b = a;
    FragTrap c;

    c = a;

    std::cout << line << std::endl;
    a.highFivesGuys();
    a.beRepaired(50);
    a.attack("mike");
    a.takeDamage(50);

    std::cout << line << std::endl;
    b.highFivesGuys();
    b.beRepaired(50);
    b.attack("mike");
    b.takeDamage(50);

    std::cout << line << std::endl;
    c.highFivesGuys();
    c.beRepaired(50);
    c.attack("mike");
    c.takeDamage(50);

    std::cout << line << std::endl;
    return 0;
}
