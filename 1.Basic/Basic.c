#include <stdio.h> // 전처리를 통해 Header File 추가 
 // #은 preprocess를 의미
 // 컴파일 하기 전 <>에 있는 내용을 실행

 // .h는 확장자를 가지는 헤더 파일을 의미
 // Header File은 미리 만들어진 함수 리스트
 // stdio.h는 입출력, 반복문, 조건문 등을 포함


void main() {
  int i; 
  int sum = 0;

  for (i = 1; i <= 10; i++) {
    sum += 1;
  }
  printf("%d", sum);

  int number;

  printf("\nEnter Decimal: ");
  scanf("%d", &number); // scanf를 통해 입력받은 값이 아닌 memory address

  if(number < 0) {
    printf("\n%d is negative", number);
  } else if(number > 0) {
    printf("\n%d is positive", number);
  } else {
    printf("\n%dis zero", number);
  }
  return;
}