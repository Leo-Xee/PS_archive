/**
 * 삽입 정렬
 */

#include <stdio.h>

int main() {
    int temp;
    int arr[11] = {1, 3, 6, 9, 10, 4, 1, 7, 8, 2, 5};
    for (int i=0; i<10; ++i) {
        int j = i;
        while (arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
    for (int i=0; i<11; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}