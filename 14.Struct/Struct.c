#include <stdio.h>

struct student {
  char name[15];
  char s_id;
  int age;
  char phone_number[14];
};

int main() {
  struct student DAO;

  printf("name: ");
  scanf("%s \n", DAO.name);
  printf("ID: ");
  scanf("%s \n", DAO.s_id);
  printf("age: ");
  scanf("%d \n", &DAO.age);
  printf("phone_number: ");
  scanf("%s \n", DAO.phone_number);

  printf("name: %s, ID: %d, age: %d, phone_number: %s\n", DAO.name, DAO.s_id, DAO.age, DAO.phone_number);

  return 0;
}