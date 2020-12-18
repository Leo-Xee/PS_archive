/**
 * 선택 정렬
 * 시간복잡도: O(N^2)
 */

#include <stdio.h>

int main() {
    int min, index, temp;
    int arr[10] = {1, 3, 6, 9, 10, 4, 7, 8, 2, 5};
    for (int i=0; i < 10; ++i) {
        min = 9999;
        for (int j=i; j < 10; ++j) {
            if (min > arr[j]) {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for(int i=0; i<10; ++i) {
        printf("%d ", arr[i]);
    }
}