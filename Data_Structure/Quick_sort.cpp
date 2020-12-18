/**
 * 퀵 정렬
 */
#include <stdio.h>

int number = 10;
int data[] = {1, 3, 6, 9, 10, 4, 7, 8, 2, 5};

void quickSort(int *data, int start, int end) {
    if (start >= end) return;
        
    int key = start;    // 기준값(Pivot)을 첫 번째 값으로 초기화 
    int i = start + 1;
    int j = end;
    int temp;

    while (i <= j) {    // 엇갈릴 때까지 반복 
        while (i <= end && data[i] <= data[key]) {  // 키값보다 큰 값을 만날 때까지 
            i++;
        }
        while (j > start && data[j] >= data[key]) { // 키값보다 작은 값을 만날 때까지 
            j--;
        }
        if (i > j) {    // 엇갈리면 키 값과 교체
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else {        // 엇갈리지 않으면 i와 j의 값 교체 
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
    quickSort(data, start, j-1);
    quickSort(data, j+1, end);
}

int main() {
    quickSort(data, 0, number-1);
    for (int i=0; i<number; ++i) {
        printf("%d ", data[i]);
    }
    return 0;
}