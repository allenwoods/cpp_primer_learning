#include <iostream>
/*
 *Author: Гагарин
 *Date: 2015-08-31
 */
int main()
{
    std::cout << "Oh great user! Whats' your name, may I ask ?" << std::endl << "I'm: ";
    std::string user = "";
    std::cin >> user;
    std::cout << "Hello, " << user << "!" << std::endl;
    return 0;
}
