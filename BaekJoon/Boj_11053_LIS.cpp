/**
 * 가장 긴 증가하는 부분 수열(LIS) (11053)
 * 
 * 시간복잡도 : O(N^N)
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int d[1001]; // LIS의 길이
    int a[1001]; // 수열
    scanf("%d", &n);
    // n개의 수열 입력
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    // ... a[j]와 a[i] 비교해서 d[i] 증가
    for (int i=0; i<n; i++) {
        d[i] = 1;
        for (int j=0; j<i; j++) {
            if (a[j] < a[i]) {
                d[i] = max(d[i], d[j]+1);
            }
        }
        sum = max(d[i], sum);
    }
    printf("%d", sum);
    return 0;
}