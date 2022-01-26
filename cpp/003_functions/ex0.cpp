#include <iostream>

int add(int num);

int add(int num) {
    if(num != 0) {
      return num + add(num - 1);
    }
    return 0;
} 

int main() {
  int num;
  std::cout << "Enter an Integer: ";
  std::cin >> num;

  int z = add(num);

  std::cout << z << std::endl;
}