#include <stdio.h>

int main() {
  // char message[1001];

  // scanf("%s", message);
  // printf("%s", message);

  char message[100];
  scanf("%s", message);

  int msgLen = sizeof(message) / sizeof(message[0]);

  int strLen = 0;
  for(int i = 0; i < msgLen && message[i] != 0; i++) {
    strLen += 1;
  }

  printf("\n %d", strLen);
}