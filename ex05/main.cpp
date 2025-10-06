#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2) {
		std::string level = av[1];
		Harl h;
		std::cout << "Personnal Harl test =>" << std::endl;
		h.complain2(level);
		std::cout << "\nPointer Harl test =>" << std::endl;
		h.complain(level);
	}
	else {
		std::cout << "Waited : ./harl [level between 1-4]" << std::endl;
		return (1);
	}
	return (0);
}
