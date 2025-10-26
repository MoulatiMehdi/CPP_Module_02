#include "FragTrap.hpp"
#include <string>

int main()
{
    FragTrap a("Bob");
    FragTrap b = a;
    FragTrap c;

    c = a;

    a.highFivesGuys();
    a.beRepaired(50);
    a.attack("mike");
    a.takeDamage(50);

    return 0;
}
