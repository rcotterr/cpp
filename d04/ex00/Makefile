all:
	clang++ -Wall -Wextra -Werror Sorcerer.hpp Sorcerer.cpp Victim.hpp Victim.cpp Peon.cpp Peon.hpp main.cpp Cat.cpp Cat.hpp

clean:
	rm -rf a.out Sorcerer.hpp.gch Victim.hpp.gch Peon.hpp.gch Cat.hpp.gch

re:
	rm -rf a.out Sorcerer.hpp.gch Victim.hpp.gch Peon.hpp.gch
	clang++ -Wall -Wextra -Werror Sorcerer.hpp Sorcerer.cpp Victim.hpp Victim.cpp Peon.cpp Peon.hpp main.cpp Cat.cpp Cat.hpp

test:
	clang++ -Wall -Wextra -Werror Sorcerer.hpp Sorcerer.cpp Victim.hpp Victim.cpp Peon.cpp Peon.hpp main_tests.cpp Cat.cpp Cat.hpp
