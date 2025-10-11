#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int main()
{
    ScavTrap a;
    ScavTrap b("Bob");
    ScavTrap c = a;

    c = b;

    std::cout << std::string(50,'-') << std::endl;
    a.attack("Jon");
    a.beRepaired(10);
    a.guardGate();
    std::cout << std::string(50,'-') << std::endl;

    b.attack("jon");
    b.beRepaired(10);
    b.guardGate();

    std::cout << std::string(50,'-') << std::endl;

    static_cast<ClapTrap>(b).attack("hello");
    std::cout << std::string(50,'-') << std::endl;
    return 0;
}
