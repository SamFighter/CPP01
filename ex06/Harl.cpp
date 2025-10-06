#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
  std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
  std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void ) {
  std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	typedef void	(Harl::*ptr)();
	std::string		levelName[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	ptr				levelCase[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	int				i;

	for (i = 0; i < 4; i++)
		if (levelName[i] == level)
			break;
	switch (i) {
		case 0:
			(this->*levelCase[0])();
			std::cout << std::endl;
			// fall through
		case 1:
			(this->*levelCase[1])();
			std::cout << std::endl;
			// fall through
		case 2:
			(this->*levelCase[2])();
			std::cout << std::endl;
			// fall through
		case 3:
			(this->*levelCase[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
