 #include <stdio.h>

int swap(int *left, int *right) {
	int temp;
	if(*left > *right) {
		temp = *left;
		*left = *right;
		*right = temp;
	}
}

int main() {
	int left;
	int right;
	scanf("%d", &left);
	scanf("%d", &right);
	
	swap(&left, &right);
	
	printf("left : %d, right : %d", left, right);
	
	return 0;
}