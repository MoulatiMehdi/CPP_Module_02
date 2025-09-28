#include <string>

typedef unsigned int u_int;

class ClapTrap
{
  public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &other);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  private:
    std::string _name;
    u_int       _health;
    u_int       _energy;
    u_int       _attack;
};
