#include <stdio.h>

typedef struct {
  int s_id;
  int age;
} Student;

void print_student(Student s) {
  s.s_id = 2000;
  s.age = 20;

  printf("ID: %d, age: %d\n", s.s_id, s.age);

}


int main() {
  Student s;

  s.s_id = 1000;
  s.age = 22;

  print_student(s);

  printf("ID: %d, age: %d\n", s.s_id, s.age);
  return 0;
}

