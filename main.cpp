#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b("Bob");
    ScavTrap c = a;

    c = b;

    a.attack("Jon");
    a.beRepaired(10);
    a.guardGate();
    return 0;
}
