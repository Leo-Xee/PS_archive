/**
 * 수 정렬하기(2750)
 * 
 */

#include <stdio.h>

int main(void) {
    int n, i, j, temp, min, index;
    int arr[1001];
    scanf("%d", &n);
    for (i=0; i<n; ++i) {
        scanf("%d", &arr[i]);
    }
    // Selection sort
    for (i=0; i<n; ++i) {
        min = 9999;
        for (j=i; j<n; ++j) {
            if(min > arr[j]) {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for (i=0; i<n; ++i) {
        printf("%d\n", arr[i]);
    }
    return 0;
}