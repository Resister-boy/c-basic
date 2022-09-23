#include <stdio.h>

// Pointer도 일반 변수와 같이 값이 들어가 있는 변수이기 때문에 
// 기본적인 증감 연산을 적용할 수 있음 // ++/--와 같은 전후위 연산도 적용할 수 있음
// 곱셈이나 나눗셈은 불가

// Pointer에 증감 연산을 적용할 경우 정수와 동일하게 적용되지않음
// 1byte = 8bit, 4byte = 32bit
// integer type의 경우 1을 더할 경우 4가 증가되는데 이는 integer가 4byte이기 때문
// Pointer의 증감 연산은 자료형에 따라 달라지면 double의 경우 8byte이기 때문에 8씩 증감

int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	double arr2[5] = {10.1, 20.2, 30.3, 40.4, 50.5};
	int *arrPtr = arr;
	double *arrPtr2 = arr2;

	printf("Pointer ADdress : %d %d\n", arrPtr++, arrPtr2++);
	printf("Operated: %d %d\n", arrPtr, arrPtr2);
	printf("Value : %d %.2f\n", *arrPtr, *arrPtr2);

	arrPtr += 2;
	arrPtr2 += 2;

	printf("Operated : %d %d\n", arrPtr, arrPtr2);
	printf("Value : %d %.2f\n", *arrPtr, *arrPtr2);

	return 0;
}