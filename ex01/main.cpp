#include "ScavTrap.hpp"
#include <cstring>
#include <iostream>
#include <string>

int main()
{
    ScavTrap a;
    ScavTrap b("Solaimane");
    ScavTrap c = a;

    c = b;

    std::cout << std::string(50, '-') << std::endl;
    
    a.attack("Jon");
    a.beRepaired(10);
    a.guardGate();

    std::cout << std::string(50, '-') << std::endl;

    b.attack("jon");
    b.beRepaired(10);
    b.guardGate();

    std::cout << std::string(50, '-') << std::endl;
    
    c.attack("POP");
    c.beRepaired(10);
    b.guardGate();

    std::cout << std::string(50, '-') << std::endl;
    return 0;
}
