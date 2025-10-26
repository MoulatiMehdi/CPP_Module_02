#include "ClapTrap.hpp"
#include <string>

int main()
{
    ClapTrap tmp;
    ClapTrap a("bob");
    ClapTrap tmp1 = a;

    tmp = a;

    a.attack("jack");
    a.takeDamage(1);
    a.beRepaired(10);
    return 0;
}
