#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
  protected:
    static const unsigned int HEALTH_POINT = 100;
    static const unsigned int ENERGY_POINT = 100;
    static const unsigned int ATTACK_POINT = 30;

  public:
    FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap(const std::string &name);

    FragTrap &operator=(const FragTrap &other);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif
