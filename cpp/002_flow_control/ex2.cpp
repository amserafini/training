#include <iostream>
#include <string>
#include <assert.h>

int abs_val(int num) {
  if (num >= 0) {
    return num; //return is store it in the memory
  } else {
    return num * -1;
  }
}

int main(int argc, char** argv) {
  assert(argc == 2);
  int N = atoi(argv[1]);

  for (int y=0; y<N; y++) {
    for (int x=0; x<N; x++) {
      std::cout << abs_val(x-y) << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}