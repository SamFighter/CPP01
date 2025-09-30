#include "SedIsForLosers.hpp"

static std::vector<std::string> sed_cut(std::string line) {
	std::vector<std::string>	words;
	std::string					word;
	std::istringstream iss(line);

	while (iss >> word) {
		words.push_back(word);
	}
	return (words);
}

std::string sed_replace(std::string line, std::string s1, std::string s2) {
	std::vector<std::string>	words;
	std::string					replaced;

	words = sed_cut(line);
	for (size_t i = 0; i < words.size(); i++)
		if (words[i] == s1) {
			words[i] = s2;
		}
	for (size_t i = 0; i < words.size(); i++) {
		replaced += words[i];
		if (i != words.size() - 1) {
			replaced += " ";
		}
	}
	return (replaced);
}

std::string replace_spaces(const std::string& line, const std::string& s1, const std::string& s2) {
    if (s1 == " ") {
        std::string result;
        for (std::string::size_type i = 0; i < line.size(); ++i) {
            if (line[i] == ' ')
                result += s2;
            else
                result += line[i];
        }
        return result;
    }
    return line;
}
