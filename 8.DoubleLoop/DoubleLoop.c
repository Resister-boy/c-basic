#include <stdio.h>

int main() {
  // for(int i = 0; i < 3; i++) {
  //   for(int j = 0; j < 6; j++) {
  //     printf("%d", j);
  //   }
  //   printf("\n");
  // }
  // return 0;

  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < i + 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  int m;
  scanf("%d", &m);

  for(int i = 1; i <= m; i++) {
    for(int j = m - i; j >= 0; j--) {
      printf("*");
    }
    printf("\n");
  }

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < i  + 1; j++) {
      printf("j");
    }

    for(int k = 5 - i; 0 < k; k--) {
      printf("k");
    }
    printf("\n");
  }

}