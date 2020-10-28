/**
 * 2 x n 타일링 (11726)
 * 
 * Top Down 방식
 * D[n] = 2 x n 직사각형을 채우는 방법의 수
 * D[n] = D[n-1] + D[n-2]
 * 주의 : 공집합도 1개의 방법이다.
 * 배열을 전역변수로 두지 않아서 시간이 걸렸다.
 * 
 */

#include <cstdio>

int d[1001];
int tiling(int n) {
    if (n <= 1) {
        return 1;
    }
    if (d[n] > 0) {
        return d[n];
    }
    d[n] = tiling(n-1) + tiling(n-2);
    return d[n] % 10007;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", tiling(n));
    return 0;
}
