#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>

class ClapTrap
{
  protected:
    typedef unsigned int u_int;

    static const u_int HEALTH_POINT = 10;
    static const u_int ENERGY_POINT = 10;
    static const u_int ATTACK_POINT = 0;

  public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  private:
    std::string _name;
    u_int       _health;
    u_int       _energy;
    u_int       _attack;
};

#endif
