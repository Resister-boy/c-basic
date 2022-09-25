#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h> // time


int main() {
  srand(time(NULL));

  int random = rand();

  printf("%d", random);

  return 0;
}