/**
 * 합분해 (2225) - 다시 풀어보기
 * 
 * d[n][k] = 0 ~ n까지의 정수 K개를 더해서 그 합이 n이 되는 경우의 수 
 * 0 + 1 + ... + l = n
 * (  n - l  ) + l = n
 * ----------- --> k-1개
 * d[n][k] = sum(d[n-l][k-1]) 0<=l<=n
 */

#include <cstdio>
long long d[201][201];
long long mod = 1000000000;
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    d[0][0] = 1LL;
    for (int i=0; i<=n; i++) {
        for(int j=1; j<=k; j++) {
            for (int l=0; l<=n; l++) {
                d[i][j] += d[i-l][j-1];
                d[i][j] %= mod;
            }
        }
    }
    printf("%lld", d[n][k]);
    return 0;
}