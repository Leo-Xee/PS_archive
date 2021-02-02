/**
 * 퀵 정렬
 * 시간 복잡도: 최악(N^2), 평균(N*logN)
 * 특정 값을 기준으로 큰 숫자와 작은 숫자를 서로 교환한 후 배열을 반으로 나누는 방식 
 */
#include <stdio.h>

int number = 10;
int arr[] = {1, 3, 6, 9, 10, 4, 7, 8, 2, 5};

void quickSort(int *arr, int start, int end) {
    if (start >= end) return;

    int key = start;    // 기준값(Pivot)
    int i = start + 1;
    int j = end;
    int temp;

    // 엇갈릴 때까지 반복
    while (i <= j) {
        // key보다 큰 값을 만날 때까지 
        while (arr[key] >= arr[i] && i <= end) {
            i++;
        }
        // key보다 작은 값을 만날 때까지 
        while (arr[key] <= arr[j] && j > start) {
            j--;
        }

        // 엇갈리면 작은 값과 key값 swap 
        if (i > j) {
            temp = arr[key];
            arr[key] = arr[j];
            arr[j] = temp;
        // 엇갈리지 않으면 i,j값 swap 
        } else {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // key값 기준으로 양쪽을 재귀로 분할 정복
    quickSort(arr, start, j-1);
    quickSort(arr, j+1, end);
}

int main() {
    quickSort(arr, 0, number-1);
    for (int i=0; i<number; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}