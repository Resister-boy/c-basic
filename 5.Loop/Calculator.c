#include <stdio.h>

int main() {
  int input;
  scanf("%d", &input);

  int sum = 0;
  for(int i = 1; i < input+1; i++) {
    sum += i;
  }
  printf("sum: %d\n", sum);
}