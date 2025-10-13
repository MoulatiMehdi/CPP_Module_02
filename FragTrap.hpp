#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
    FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap(const std::string &name);

    FragTrap &operator=(const FragTrap &other);
    ~FragTrap();

    void highFivesGuys(void);
};
