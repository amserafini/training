#include <iostream>
#include <string>

int main(int argc, char** argv) {
  assert (argc != 1);
  int start = atoi(argv[1]);
  int stop = atoi(argv[argc-1]);

  for (int i=start; i<=stop; i++){
    std::cout << i << std::endl;
  } //ok
}