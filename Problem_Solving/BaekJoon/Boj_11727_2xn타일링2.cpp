/**
 * 2 x n 타일링2 (11727)
 * D[n] = D[n-1] + D[n-2] + D[n-2] 
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
    d[n] = tiling(n-1) + tiling(n-2) + tiling(n-2);
    d[n] %= 10007; // 시간초과를 막기 위해 나머지를 저장
    return d[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", tiling(n));
    return 0;
}