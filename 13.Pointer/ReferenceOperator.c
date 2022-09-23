#include <stdio.h>

int main() {
  // reference Operator
  // *: 연산자는 Pointer를 이용할 때 사용되기도 함
  // 피연산자가 두 개일 경우 곱셈 연산자이지만, 피연산자가 하나만 있을 경우 참조 연산자
  // 참조 연산자는 Pointer의 이름이나 주소 앞에 사용하며, 포인터가 가리키는 주소에 저장된 값을 반환

  int *p = NULL;
  int num = 15;

  p = &num;
  printf("Pointer p: %d\n", *p);
  printf("Integer num: %d\n", num);

  *p += 5; // *의 경우 Pointer가 가르키고 있는 변수에 접근
  printf("Pointer p: %d\n", *p);
  printf("Integer num: %d\n", num);

  (*p)++; // *의 경우 Pointer가 가르키고 있는 변수에 접근 
  // 증감 연산자가 참조 연산자보다 우선순위가 높기 때문에 () 사용
  printf("Pointer p: %d\n", *p);
  printf("Integer num: %d\n", num);

  *p++;
  // 증감 연산자가 참조 연산자보다 우선순위가 높기 때문에 () 사용하지 않을 경우 Pointer 주소 자체를 변경
  printf("Pointer p: %d\n", *p);
  printf("Integer num: %d\n", num);

  return 0;
}


// void pointerPlus(int *num)
// {
// 	*num += 5;
// }

// void numPlus(int num)
// {
// 	num += 5;	
// }

// int main()
// {
// 	int num = 15;
// 	printf("num 값 : %d\n", num);

// 	numPlus(num);
// 	printf("numPlus 사용 후 : %d\n", num);

// 	pointerPlus(&num);
// 	printf("pointerPlus 사용 후 : %d\n", num);

// 	return 0;
// }

// 그냥 변수를 인자로 받은 numPlus의 경우 실행하고 난 뒤에도 값이 바뀌지 않음. 
// num의 값이 복사될 뿐 직접적으로 num 변수에 접근할 수 없기 때문
// .. But, pointerPlus를 실행한 뒤에는 정상적으로 num 값이 변경됨
// call by value, call by reference