#include <iostream>
#include <string>


int main() {

    std::string superSecretString = "232-33-5643";

    std::string inputString;
    std::cout << "Enter your SSN: XXX-XX-XXXX\n";
    std::cin >> inputString;


    if(superSecretString == inputString)
    {
        std::cout << "YOU ARE GUSTAVO MARTINEZ! LOGIN SUCCESSFUL\n";
        exit(0);
    }
    else
    {
        std::cout << "ACCESS DENIED!!!\n";
        exit(0);
    }

}