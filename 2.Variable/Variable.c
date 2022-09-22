#include <stdio.h>

int main() {
  int level;
  int hp;
  int damage;
  int defense;

  level = 42;
  hp = 50;
  damage = 5;
  defense  =2;
  
  printf("level: %d\n", level);
  printf("hp: %d\n", hp);
  printf("damage: %d\n", damage);
  printf("defense: %d\n", defense);
  
  float a = 1.1;
  double b = 9.142;

  printf("\na = %.1f && , b = %.4f\n", a, b);

  int t; 
  scanf("\n%d", &t);
  printf("\n%d", t);

  return 0;
}