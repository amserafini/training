#include <iostream>
#include <string>

int main(int argc, char** argv) {
  int start = atoi(argv[1]);
  int stop = atoi(argv[argc-1]);

  for (int i=start; i<=stop; i++){
    if (i%2!=0){
      std::cout << i << " -- divisors: ";
      for (int j=2; j<i; j++) {
        if (i%j==0) {
          std::cout << j << " "; 
        }
      }
    std::cout << std::endl;
    } //oh
  }
}
