/**
 * 1,2,3 더하기(9095)
 * 
 * D[n] = D[n-1] + D[n-2] + D[n-3]
 * 
 * 시간복잡도 : O(N)
 */

#include <cstdio>

int d[11];
int go(int n) {
    if (n <= 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    if (n == 3) {
        return 4;
    }
    if (d[n] > 0) {
        return d[n];
    }
    d[n] = go(n-1) + go(n-2) + go(n-3);
    return d[n]; 
}

int main() {
    int n;
    scanf("%d", &n);

    while(n-- > 0) {
        int m;
        scanf("%d", &m);
        printf("%d\n", go(m));
    }
}