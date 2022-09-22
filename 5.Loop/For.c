#include <stdio.h>

void main() {
  int input;
  scanf("%d\n", &input);
  for (int i = 1; i < 10; i++) {
    printf("%d x %d = %d\n", input, i, input * 1);
  }
}