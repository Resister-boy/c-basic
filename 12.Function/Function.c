#include <stdio.h>

int arrayPlus(int arr[], int length) {
	int result = 0;

	for(int i=0; i < length; i++) {
		result += arr[i];
	}

	return result;
}

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int result;
	int length = sizeof(arr) / sizeof(int);

	result = arrayPlus(arr, length);

	printf("sum: %d", result);

	return 0;
}