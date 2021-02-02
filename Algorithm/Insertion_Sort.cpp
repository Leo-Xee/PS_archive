/**
 * 삽입 정렬
 * 시간복잡도: O(N^2)
 * 각 숫자를 적절한 위치에 삽입하느 방식
 * 정렬할 필요가 있을 때만 삽입을 진행하기 때문에 
   거의 정렬된 상태에 한해서는 어떤 정렬 알고리즘보다 빠르다.
 */

#include <stdio.h>

int main() {
    int temp;
    int arr[10] = {1, 3, 6, 9, 10, 4, 7, 8, 2, 5};
    for (int i = 0; i < 9; i++) {
        int j = i;
        while (arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}