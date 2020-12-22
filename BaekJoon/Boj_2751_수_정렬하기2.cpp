/**
 * 수 정렬하기 (2751)
 */

#include <stdio.h>

int n, data[1000001];
void quickSort(int *data, int start, int end) {
    if (start >= end) {
        return;
    }

    int key = start;
    int i = start + 1, j = end, temp;

    // 엇갈릴 때까지 반복
    while (i <= j) {
        while (data[i] <= data[key] && i <= end) {
            i++;
        }
        while (data[j] >= data[key] && j > start) {
            j--;
        }
    }
    if (i > j) {    // 엇갈리면 작은 값과 키 값 교체 
        temp = data[key]; 
        data[key] = data[j];
        data[j] = temp;
    } else {    // 엇갈리지 않으면 i와 j값 교체 
        temp = data[i];
        data[i] = data[j];
        data[j] = temp;
    }
    quickSort(data, start, j-1);
    quickSort(data, j+1, end);
}
int main(void) {
    scanf("%d", &n);
    for (int i=0; i<n; ++i) {
        scanf("%d", &data[i]);
    }
    quickSort(data, 0, n-1);
    for (int i=0; i<n; ++i) {
        printf("%d\n", data[i]);
    }
    return 0;
}