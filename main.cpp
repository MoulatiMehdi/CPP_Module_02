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
    b.attack("jon");
    b.beRepaired(10);
    b.guardGate();
    static_cast<ClapTrap>(b).attack("hello");
    return 0;
}
