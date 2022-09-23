#include <stdio.h>

int main() {
	for(int i=0; i<10; i++) {
		if(i%2 == 0) {
			continue; // printf("%d", i) 구문 무시하고 반복문 실행
		}
		printf("%d ", i);
	}
	
	return 0;
}