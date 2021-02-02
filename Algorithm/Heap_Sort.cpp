/**
 * 힙 정렬(heap sort)
 */
#include <stdio.h>

int number = 9;
int arr[] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main(void) {
  // 힙 생성 
  for (int i=1; i<number; i++) {
    int c = i;
    do {
      int root = (c - 1) / 2;   // 부모 인덱스를 가리킨다. / leaf(root): 1(0), 2(1), 3(1), 4(2), 5(2)...
      if (arr[root] < arr[c]) { // 부모보다 값이 크면 값을 교환
        int temp = arr[root];
        arr[root] = arr[c];
        arr[c] = temp;
      }
      c = root; 
    } while(c != 0);
  }

  // 힙을 재차 구성하고 힙의 크기를 1 감소
  for (int i = number-1; i>=0; i--) {   // 가장 큰 값인 루트을 맨뒤로 보낸다(제외시킴)
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;

    int root = 0;
    int c = 1;
    do {
      c = 2 * root + 1;
      // 자식 중에 더 큰 값 찾기 
      if (c < i-1 && arr[c]< arr[c+1]) {  
        c++;
      }
      //  루트보다 자식의 값이 크면 교환
      if (c < i && arr[root] < arr[c]) {
        int temp = arr[root];
        arr[root] = arr[c];
        arr[c] = temp;
      }
      root = c;
    } while(c < 1);
  }

  for (int i=0; i < number; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}