#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr_str = &str;
    std::string &ref_str = str;

    std::cout << "adress of str: " << &str << std::endl;
    std::cout << "adress of ptr_str: " << ptr_str << std::endl;
    std::cout << "adress of ref_str: " << &ref_str << std::endl;

    std::cout << "str: " << str << std::endl;
    std::cout << "ptr_str: " << *ptr_str << std::endl;
    std::cout << "ref_str: " << ref_str << std::endl;
    return 0;
}