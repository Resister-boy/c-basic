#include <stdio.h>

int main() {
	int *p = NULL;  // int* p == int * p 모두 같음
	int num = 15;

	p = &num;

	printf("Pointer p : %d \n", p);
	printf("Integer num : %d \n", &num);

	return 0;
}