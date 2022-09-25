#include <stdio.h>

// typedef struct _Student {
// 	int age;
// 	char phone_number[14];
// } Student; // 별칭

typedef struct { // 익명 구조체
  int age;
  char phone_number[14];
} Student;

int main(){
	Student goorm;
	
	printf("age : ");
	scanf("%d", &goorm.age);
	printf("number : ");
	scanf("%s", goorm.phone_number);
	
	printf("----\nage : %d\nnumber : %s\n----", goorm.age, goorm.phone_number);
	
	return 0;
}