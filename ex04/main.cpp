#include "SedIsForLosers.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream ifs(filename.c_str());
    if (!ifs) {
        std::cerr << "Error: cannot open input file." << std::endl;
        return 1;
    }

    std::ofstream ofs((filename + ".replace").c_str());
    if (!ofs) {
        std::cerr << "Error: cannot create output file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(ifs, line))
        ofs << sed_replace(line, s1, s2) << std::endl;

    return 0;
}
