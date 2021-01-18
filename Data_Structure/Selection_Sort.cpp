/***
* Selection Sort
* 시간복잡도: O(n^2)
* 최솟값을 선택해서 제일 앞으로 보내는 방식
*/
#include <stdio.h>

int main() {
  int min, temp, idx;
  int arr[10] = {4, 2, 9, 10, 1, 3, 8, 7 , 6, 5};
  for (int i = 0; i < 10; i++) {
    min = 9999;
    for (int j = i; j < 10; j++) {
      // 최솟값보다 작으면 min 교체
      if (min > arr[j]) {
        min = arr[j];
        idx = j;
      }
    }
    // swap
    temp = arr[i];
    arr[i] = arr[idx];
    arr[idx] = temp;
  }
  for (int i= 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
return 0;
}