/**
 * Merge Sort
 * 시간복잡도: O(N * logN) 
 * 퀵정렬보다 메모리를 조금 더 사용하지만 최악의 경우에도 보장한다.
 */

#include <stdio.h>

int number = 8;
int size;
int sorted[8];

void merge(int a[], int m, int middle, int n) {
    int i = m;
    int j = middle + 1;
    int k = m;
    // 작은 순서대로 배열에 삽입
    while (i <= middle && j <= n) {
        if (a[i] <= a[j]) {
            sorted[k] = a[i];
            i++;
        } else {
            sorted[k] = a[j];
            j++;
        }
        k++;
    }
    // 남은 데이터도 삽입
    if (i > middle) {
        for (int t=j; t <= n; ++t) {
            sorted[k] = a[t];
            k++;
        }
    } else {
        for (int t= i; t <= middle; ++t) {
            sorted[k] = a[t];
            k++;
        }
    }
    // 정렬된 배열을 삽입 
    for (int t=m; t<=middle; ++t) {
        a[t] = sorted[t];
    }
}

void mergeSort(int a[], int m, int n) {
    if (m < n) {
        int middle = (m + n) / 2;
        mergeSort(a, m, middle);
        mergeSort(a, middle + 1, n);
        merge(a, m, middle, n);
    }
}

int main(void) {
    int arr[number] = {7, 6, 5, 8, 3, 5, 9, 1};
    mergeSort(arr, 0, number - 1);
    for (int i=0; i < number; ++i) {
        printf("%d" ,arr[i]);
    }
    return 0;
}