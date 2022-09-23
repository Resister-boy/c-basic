#include <stdio.h>

int main() {
  int arr[10] = {9, 17, 5, 6, 124, 112, 1, 3, 87, 55};
	int length = sizeof(arr) / sizeof(arr[0]);

  int j;
  int temp;

  for(int i = 1; i < length; i++) {
    temp = arr[i]; // 기본 값
    j = i - 1; // i - 1으로 j 선언
    while(0 <= j && temp < arr[j]) { 
      // j가 index의 0이 아니고, arr[i](temp)보다 arr[j](arr[i - 1]) 이 클 때 
      arr[j + 1] = arr[j]; // temp에 해당하는 index에 arr[j] 삽입
      j--; // index가 0이 될 때가지 배열 순회
    }
    arr[j + 1] = temp; // ㅅ
  }

  for(int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}