/**
 * 쉬운 계단 수 (10844) - Bottom Up 
 *
 * D[i][j] : 길이가 i인 계단 수, j은 마지막 수
 */

#include <cstdio>
using namespace std;

long long d[101][10];
long long mod = 1000000000;
int main()  {
    int n;
    scanf("%d", &n);
    // 길이가 1인 계단수 처리
    for (int i=1; i<=9; i++) {
        d[1][i] = 1;
    }
    // 마지막 수가 0 ~ 9이고 길이가 2 ~ n인 계단수 처리
    for (int i=2; i<=n; i++) {
        for (int j=0; j<=9; j++) {
           // 0으로 초기화
           d[i][j] = 0;
           // j=0이면 j-1 >= 0 이어야 계단수 성립
           if (j-1 >= 0) {
               d[i][j] += d[i-1][j-1];
           }
           // j=9이면 j+1 <= 9 이어야 계단수 성립
           if (j+1 <= 9) {
               d[i][j] += d[i-1][j+1];
           }
           d[i][j] %= mod;
        }
    }
    long long cnt = 0;
    // n개의 계단수까지 합
    for (int i=0; i<=9; i++) {
        cnt += d[n][i];
    }
    printf("%lld\n", cnt%mod);
    return 0;
}
