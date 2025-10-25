#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>

typedef unsigned int u_int;

class ClapTrap
{
  public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();

    virtual void attack(const std::string &target);
    void         takeDamage(unsigned int amount);
    void         beRepaired(unsigned int amount);

  protected:
    std::string _name;
    u_int       _health;
    u_int       _energy;
    u_int       _attack;
};

#endif
