#include <stdio.h>

int main() {
  // switch는 if문과 마찬가지로 조건을 체크하고 케이스를 실행
  // 단, if문과 같이 관계식을 사용할 수 없고 미리 정해진 값을 체크
  // + if문과 같이 조건을 하나씩 체크하지 않고 해당하는 케이스를 바로 실행하기 때문에 속도 빠름
  // + 일반적으로 4개 이상의 조건이 중첩될 때 switch문의 성능이 효율적

	int input;	
	scanf("%d", &input);
	
	switch(input)
	{
		case 10:
		case 9:
		case 8:
		case 7:
			printf("Your Grade is A\n");
			break;
		case 6:
		case 5:
		case 4:
			printf("Your Grade is B.\n");
			break;
		case 3:	
		case 2:
		case 1:
		case 0:
			printf("Your Grad is C\n");
			break;
		default:
			printf("Your Out\n");
	}
	
	return 0;
}