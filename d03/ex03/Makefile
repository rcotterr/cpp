all:
	clang++ -Wall -Wextra -Werror -Wno-shadow ClapTrap.cpp ClapTrap.hpp ScavTrap.cpp ScavTrap.hpp FragTrap.cpp FragTrap.hpp DiamondTrap.cpp DiamondTrap.hpp main.cpp

clean:
	rm -rf a.out ClapTrap.hpp.gch ScavTrap.hpp.gch FragTrap.hpp.gch DiamondTrap.hpp.gch

re:
	rm -rf a.out ClapTrap.hpp.gch ScavTrap.hpp.gch
	clang++ -Wall -Wextra -Werror ClapTrap.cpp ClapTrap.hpp ScavTrap.cpp ScavTrap.hpp FragTrap.cpp FragTrap.hpp DiamondTrap.cpp DiamondTrap.hpp main.cpp