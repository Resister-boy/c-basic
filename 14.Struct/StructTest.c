#include <stdio.h>

typedef struct {
  char name[15];
  int kor;
  int eng;
  int math;
  float avg;
} Student;

int main() {
  Student s[3];

  int length = sizeof(s) / sizeof(s[0]);

  for(int i = 0; i < length; i++) {
    scanf("%s", s[i].name);
    scanf("%d", s[i].kor);
    scanf("%d", s[i].eng);
    scanf("%d", s[i].math);
    s[i].avg = (s[i].kor + s[i].eng + s[i].math) / 2;
  }

  for(int i = 0; i < length; i++) {
    printf("%s ", s[i].name);
    printf("%.1f\n", s[i].avg);
  }

  return 0;
}