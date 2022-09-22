#include <stdio.h>

int main() {
	int arr[5] = {};
  int length = sizeof(arr) / sizeof(arr[0]); // integet type을 요소로 갖는 배열 길이 구하는 법
	for(int i = 0; i < length; i++) {
		scanf("%d", &arr[i]);
	}
		
	int sum = 0;
	for(int i = 0; i < length; i++) {
		sum += arr[i];
	}
	
	printf("sum is: %d", sum);
	return 0;


}
