/**
 * 버블 정렬
 * 시간복잡도: O(N^2)
 * 옆에 있는 값과 비교해서 더 작은 것을 앞으로 당기는 방식
 * 정렬 알고리즘 중에서 가장 비효율적이고 느리다.
 */
#include <stdio.h>

int main() {
    int temp;
    int arr[10] = {1, 3, 6, 9, 10, 4, 7, 8, 2, 5};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9-i; j++) {
            // 옆의 값이 더 작으면 swap
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}