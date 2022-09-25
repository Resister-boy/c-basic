#include <stdio.h>

typedef struct {
  char name[15];
  int age;
} Teacher;

typedef struct {
  char name[15];
  int age;
  Teacher teacher;
} Student;

int main() {
  Student Student;
  Teacher Teacher;

  Student.teacher.age = 30;
  Teacher.age = 40;

  return 0;
}