#include <stdio.h>

int main() {
  int arr[10] = {1032, 99, 1004, 234, 452, 8, 922, 445, 246, 2048};
	int min = arr[0];

	int length = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i < length; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}

	printf("The Minimal Number is %d.\n", min);

	return 0;
}