#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2) {
		std::string level = av[1];
		Harl h;
		h.complain(level);
	}
	else {
		std::cout << "Waited : ./harl [debug, info, warning, error]" << std::endl;
		return (1);
	}
	return (0);
}
