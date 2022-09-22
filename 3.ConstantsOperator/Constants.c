#include <stdio.h>

int main() {
  const double PI = 3.1415;
  // PI = 1.432 => Error!
  printf("%.4f", PI);

  int a = 10;
  int b = 3;
  
  float c = 1.5;
  float d = 2.5;
  
  printf("덧셈 : ");
  printf("a + b = %d\n", a+b);
  
  printf("뺄셈 : ");
  printf("a - b = %d\n", a-b);
  printf("b - a = %d\n", b-a);
  
  printf("곱셈 : ");
  printf("c * d = %f\n", c*d);  
  
  printf("나눗셈 : ");
  printf("c / d = %f\n", c/d);
  
  printf("나머지 : ");
  printf("a %% b = %d\n", a % b); 


	int input;
	scanf("%d", &input);

  ++input; // 전위
  input++; // 후위

	printf("%d\n", input++);
	printf("%d\n", ++input);
	printf("%d\n", input--);
	printf("%d\n", --input);
  
  // 비교 연산자 => true => 1, false => 0
  printf("input 는 5와 같습니까? %d\n", input == 5);  // 같으므로 1(참)
	printf("input 는 4와 같습니까? %d\n", input == 4);  // 같지 않으므로 0(거짓)

	printf("input 는 5와 다릅니까? %d\n", input != 5); // 같으므로 0(거짓)
	printf("input 는 4와 다릅니까? %d\n", input != 4); // 같지 않으므로 1(참)

	printf("input 가 4보다 큽니까? %d\n", 4 < input);    // 크므로 1(참)
	printf("input 가 5보다 큽니까? %d\n", 5 < input);    // 크지 않으므로 0(거짓)
	printf("input 가 10보다 큽니까? %d\n", 10 < input);   // 크지 않으므로 0(거짓)

	printf("input 가 10보다 작습니까? %d\n", input < 10); // 작으므로 1(참)
	printf("input 가 5보다 작습니까? %d\n", input < 5);   // 작지 않으므로 0(거짓)
	printf("input 가 4보다 작습니까? %d\n", input < 4);  // 작지 않으므로 0(거짓)

	printf("input 가 5보다 크거나 같습니까? %d\n", 5 <= input); // 크거나 같으므로 1(참)
	printf("input 가 5보다 작거나 같습니까? %d\n", input <= 5); // 작거나 같으므로 1(참)

  // 논리 연산자
  printf("AND(논리곱) : input 는 3보다 크다. 그리고 10 보다 작다. : %d\n", 3 < input && input < 10);
  printf("AND(논리곱) : input 는 3보다 크다. 그리고 10 보다 크다. : %d\n", 3 < input && 10 < input);
  
  printf("OR(논리합) : input 는 5 이거나 4이다. : %d\n", input == 5 || input == 4);
  printf("OR(논리합) : input 는 6 이거나 7이다. : %d\n", input == 6 || input == 7);

  // 복합 대입 연산자
  input += 5; // input = input + 5
  printf("%d\n", input);
  
  input -= 3; // input = input - 3
  printf("%d\n", input);
  
  input *= 5; // input = input * 5
  printf("%d\n", input);

  input /= 7; // input = input / 7
  printf("%d\n", input);
  
  input %= 4; // input = input % 4
  printf("%d\n", input);

	return 0;
}