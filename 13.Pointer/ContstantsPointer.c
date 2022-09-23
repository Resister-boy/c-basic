#include <stdio.h>

int main() {
  // int *const [변수명]과 같이 자료형 다음에 const를 선언하게 되면
  // pointer 변수 자체가 상수가됨며, 이는 주소값을 변경할 수 없음을 의미
	int num = 10;
	int *ptr1 = &num;
	const int *ptr2 = &num;

	// *ptr1 = 20;
	// num = 30;

	// *ptr2 = 40;

	return 0;
}