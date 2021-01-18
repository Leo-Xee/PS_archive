/**
 * 2 x n 타일링 (11726)
 * 
 * D[n] = 2 x n 직사각형을 채우는 방법의 수
 * D[n] = D[n-1] + D[n-2]
 * 주의 : 공집합도 1개의 방법이다.
 * 배열을 전역변수로 두지 않아서 시간이 걸렸다.
 * 
 */

#include <cstdio>

int d[1001];
int main() {
    d[0] = 1;
    d[1] = 1;
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        d[i] = d[i-1] + d[i-2];
        d[i] %= 10007; 
    }
    printf("%d\n", d[n]);
    return 0;
}