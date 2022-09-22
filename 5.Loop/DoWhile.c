#include <stdio.h>

void main() {
  int number = 0;
  int sum = 0;

  do {
    number ++;
    sum += number;
  }

  while(0 < number && 10 > number);
  printf("%d\n", number);
  printf("%d\n", sum);
}