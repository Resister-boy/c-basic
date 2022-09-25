#include <stdio.h>

typedef struct {
  int s_id;
  int age;
} Student;

int main() {
  Student goorm;
  Student *ptr;

  ptr = &goorm;

  (*ptr).s_id = 1004;
  (*ptr).age = 20;

  printf("%d, %d", goorm.s_id, goorm.age);
}