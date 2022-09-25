#include <stdio.h>

int main() {
  int arr[2][5] = {
    { 1, 2, 3, 4, 5 },
    { 6, 7, 8, 9, 10}
  };

  int rowLength = sizeof(arr) / sizeof(arr[0]);
  int columnLength = sizeof(arr[0]) / sizeof(arr[0][0]);
  int result = 0;

  for(int i = 0; i < rowLength; i++) {
    for(int j = 0; j < columnLength; i++) {
      result += arr[i][j];
    }
  }

  printf("%d", result);

  return 0;
}