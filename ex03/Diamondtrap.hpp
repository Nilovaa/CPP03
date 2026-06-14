#ifndef "DIAMONDTRAP_HPP"
# define "DIAMONDTRAP_HPP"

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const std::string& name);
        DiamondTrap& operator=(const DiamondTrap& other);
        void attack(const std::string& target);
        void highFivesGuys();
};

#endif