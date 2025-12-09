#include "SedIsForLosers.hpp"

std::string sed_replace(const std::string &line, const std::string &s1, const std::string &s2)
{
    std::string result;

    if (s1 == " ")
	{
        for (size_t i = 0; i < line.size(); i++)
		{
            if (line[i] == ' ')
                result += s2;
            else
                result += line[i];
        }
        return result;
    }
    if (s1.empty())
        return line;
    size_t i = 0;
    while (i < line.size())
	{
        if (line.compare(i, s1.size(), s1) == 0)
		{
            result += s2;
            i += s1.size();
        } 
		else 
		{
            result += line[i];
            i++;
        }
    }
    return result;
}
