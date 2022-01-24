#include <iostream> //so that Cout works
#include <string> //in order to store text, for example, "hello"

int main () {
    std::string firstName;
    std::cout << "Type your first name:";
    std::cin >> firstName;
    std::cout << "Hello world, hello " << firstName << std::endl;
}