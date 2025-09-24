#include <iostream>

int main () {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR;
    std::string& stringREF = str;

    std::cout << "Here is the str : " << str << std::endl;
    std::cout << "Here is the reference of str using stringREF : " << stringREF << std::endl;
    std::cout << "The reference is just a surname, there are together one and only variable on the memory" << std::endl;
    std::cout << "stringREF adress : " << &stringREF << std::endl;
    std::cout << "str adress : " << &str << std::endl;
    std::cout << "if we change the value of stringREF str will change too" << std::endl;
    stringREF = "hola";
    std::cout << "stringREF value : " << stringREF << std::endl;
    std::cout << "str value : " << str << std::endl;

    std::cout << "\nNow let's add a pointer, stringPTR = &str" << std::endl;
    stringPTR = &str;
    std::cout << "We just give the adress of the value of str" << std::endl;
    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "adress of str : " << &str << std::endl;
    std::cout << "\nlets change the value of str via stringPTR" << std::endl;
    std::cout << "str now : " << str << std::endl;
    *stringPTR = "hi this is NOOOT the brain";
    std::cout << "str now : " << str << std::endl;
}
