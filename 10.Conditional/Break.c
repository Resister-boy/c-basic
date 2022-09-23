#include <stdio.h>

int main() {
	int num=5;
	
	for(int i=0; i<10; i++) {
		printf("%d ", i);
		if(i == num) {
			break; // 반복문 종료
			printf("Break Loop!");
		}
	}
	
	return 0;
}