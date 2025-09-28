#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("bob");
    ClapTrap b("jack");

    a.attack("unknown");
    b.attack("unknown");
    for (int i = 0; i < 10; i++)
    {
        a.beRepaired(5);
        b.beRepaired(10);
    }
    return 0;
}
