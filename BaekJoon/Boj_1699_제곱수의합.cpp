/**
 * 제곱수의 합 (1699)
 * 
 * 제곱 + ... + 제곱  = n
 * (제곱 + ... )+ i^2 = n
 *  ( n-i^2 ) + i^2   = n
 * 
 * d[n] : 자연수 n을 제곱수의 합으로 표현할 때 그 항의 최소개수
 * d[n] = min(d[n - i^2]) + 1 (1<=i^2<=n)
 */

#include <cstdio>

int main() {
    int n;
    int d[100001];
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        d[i] = i;
        for (int j=1; j*j<=i; j++) {    // 조건 다시 생각해보기!!
            // 최소개수로 덮어쓰기
            if (d[i] > d[i-j*j] + 1) {
                d[i] = d[i-j*j] + 1;
            }
        }
    }
    printf("%d\n", d[n]);
    return 0;
}