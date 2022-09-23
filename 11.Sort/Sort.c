#include <stdio.h>

int main() {
  int a;
  scanf("%d\n", &a);
  int b;
  scanf("%d\n", &b);
  int temp;

  temp = a;
  a = b;
  b = temp;

  printf("%d\n", a);
  printf("%d\n", b);
}