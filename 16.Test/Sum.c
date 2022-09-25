#include <stdio.h>

int main() {
  int result = 0;

  for(int i = 1; i < 5; i++) {
    for(int j = 0; j < i + 1; j++) {
      result += i * j;
    }
  }

  printf("%d", result);
  
  return 0;
}