/**
 * 버블 정렬
 * 시간복잡도: O(N^2)
 */
#include <stdio.h>

int main() {
    int temp;
    int arr[10] = {1, 3, 6, 9, 10, 4, 7, 8, 2, 5};
    for (int i=0; i<10; ++i) {
        for (int j=0; j<9-i; ++j) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i=0; i<10; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}