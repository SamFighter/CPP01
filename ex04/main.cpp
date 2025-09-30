#include "SedIsForLosers.hpp"

int main(int ac, char **av)
{
	if (ac == 4) {
		std::string filename(av[1]);
		std::string s1(av[2]);
		std::string s2(av[3]);
		if (s1.empty() || s2.empty() || filename.empty()) {
			std::cout << "Arguments musn't be empty" << std::endl;
			return (1);
		}
		std::string line;

		std::string outname = filename + ".replace";
		std::ifstream	fin(av[1]);
		if (!fin)
			return (1);
		std::ofstream	fout(outname.c_str());
		if (!fout)
			return(1);

		if (s1 != " ") {
			while (std::getline(fin, line)) {
				line = sed_replace(line, s1, s2);
				fout << line << '\n';
			}
		}
		else {
			while (std::getline(fin, line)) {
				line = replace_spaces(line, s1, s2);
				fout << line << '\n';
			}
		}
	}
	if (ac != 4) {
		std::cout << "Not enough argument : ./SedIsForLosers [filename] [occuremce] [replacement]" << std::endl;
		return (1);
	}
	return (0);
}
