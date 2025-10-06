#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void ) {
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain2( std::string level )
{
	try
	{
		int lvl;
		std::stringstream ss(level);
		ss >> lvl;
		switch (lvl) {
			case 1:
				debug();
				break;
			case 2:
				info();
				break;
			case 3:
				warning();
				break;
			case 4:
				error();
				break;
			default:
				std::cout << "level unknown or not a number : " << level << std::endl;
				std::cout << "Waiting level between 1 and 4" << std::endl;
		}
	} catch (const std::invalid_argument&) {
		std::cout << "Error : '" << level << "' invalid number" << std::endl;
	}
}

void Harl::complain( std::string level )
{
	try
	{
		int lvl;
		std::stringstream ss(level);
		ss >> lvl;
		void (Harl::*ptr)();
		switch (lvl) {
			case 1:
				ptr = &Harl::debug;
				(this->*ptr)();
				break;
			case 2:
				ptr = &Harl::info;
				(this->*ptr)();
				break;
			case 3:
				ptr = &Harl::warning;
				(this->*ptr)();
				break;
			case 4:
				ptr = &Harl::error;
				(this->*ptr)();
				break;
			default:
				std::cout << "level unknown or not a number : " << level << std::endl;
				std::cout << "Waiting level between 1 and 4" << std::endl;
		}
  	} catch (const std::invalid_argument&) {
		std::cout << "Error : '" << level << "' invalid number" << std::endl;
	}
}
