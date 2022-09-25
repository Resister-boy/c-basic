#include <stdio.h>

int main() {
  int result = 0;

  for(int i = 1; i < 10; i++) {
    for(int j = 1; j < i + 1; j += 2) {
      result += j;
    }
  }
  printf("%d", result);

  return 0;
}