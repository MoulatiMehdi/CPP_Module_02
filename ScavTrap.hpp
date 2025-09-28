
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
  private:
    bool _isGateKeeper;

  public:
    ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &other);

    void attack(const std::string &target);
    void guardGate();
};
