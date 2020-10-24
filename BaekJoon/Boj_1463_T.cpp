/*
 * 1로 만들기 (1463)
 * 
 * Top down 방식
 * D[N] = N을 1로 만들 수 있는 최소 연산 횟수
 * D[N] = D[N/3] + 1 or D[N/2] + 1 or D[N-1] + 1
 *      = min(D[N/3], D[N/2], D[N-1]) + 1 이다.
 */

#include <cstdio>
using namespace std;

// 1 <= N <= 10^6
int d[1000001];
int go(int n) {
    if (n == 1) {
        return 0;
    }
    if (d[n] > 0) {
        return d[n];
    }
    d[n] = go(n-1) + 1;
    if (n%2 == 0) {
        int temp = go(n/2) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    if (n%3 == 0) {
        int temp = go(n/3) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    return d[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", go(n));
    return 0;
}