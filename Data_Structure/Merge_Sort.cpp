/**
 * Merge Sort
 * 시간복잡도: O(N * logN) 
 * 퀵정렬보다 메모리를 조금 더 사용하지만 최악의 경우에도 보장한다.
 */

#include <stdio.h>

int sorted[10];

void merge(int arr[], int m, int mid, int n) {
    int i = m;          // 앞 배열의 idx
    int j = mid + 1;    // 뒷 배열의 idx
    int k = m;          // sorted[]의 idx

    // 작은 순서대로 sorted[]에 삽입, idx 증가
    while (i <= mid && j <= n) {
        if (arr[i] <= arr[j]) {
            sorted[k] = arr[i];
            i++;
        } else {
            sorted[k] = arr[j];
            j++;
        }
        k++;
    }

    // 앞, 뒷 배열의 삽입이 먼저 완료될 때 나머지 데이터 삽입
    if (i > mid) {
        for (int t=j; t<=n; t++) {
            sorted[k] = arr[t];
            k++;
        }
    } else {
        for (int t=i; t<=mid; t++) {
            sorted[k] = arr[t];
            k++;
        }
    }

    // 임시로 sorted[]에 저장된 배열을 삽입 
    for (int t=m; t<=n; t++) {
        arr[t] = sorted[t];
    }
}

void mergeSort(int arr[], int m, int n) {
    // 분할 정복(재귀)
    if (m < n) {
        int mid = (m + n) / 2;
        mergeSort(arr, m, mid);
        mergeSort(arr, mid+1, n);
        merge(arr, m, mid, n);
    }
}

int main() {
    int arr[10] = {7, 6, 5, 8, 3, 5, 9, 1, 2, 10};
    mergeSort(arr, 0, 9);
    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}