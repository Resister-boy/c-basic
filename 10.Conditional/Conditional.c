#include <stdio.h>

int main() {
  int input;
  scanf("%d\n", &input);

  int rest = input % 2;
  if(rest == 0) {
    printf("JJack");
  } else {
    printf("Hole");
  }

  return 0;
}