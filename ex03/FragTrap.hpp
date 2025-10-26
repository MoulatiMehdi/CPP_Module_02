#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
  protected:
    static const u_int HEALTH_POINT = 100;
    static const u_int ENERGY_POINT = 100;
    static const u_int ATTACK_POINT = 30;

  public:
    FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap(const std::string &name);

    FragTrap &operator=(const FragTrap &other);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif
