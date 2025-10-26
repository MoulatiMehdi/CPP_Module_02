#include "ScavTrap.hpp"
#include <cstring>
#include <string>

int main()
{
    ScavTrap a;
    ScavTrap b("Solaimane");
    ScavTrap c = a;

    c = b;

    a.attack("Jon");
    a.beRepaired(10);
    a.guardGate();
    a.takeDamage(10);

    return 0;
}
