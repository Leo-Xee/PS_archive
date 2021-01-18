 /**
 * 1,2,3 더하기 5 (15990)
 * 
 * Top Down
 * d[i][j] = i를 1,2,3의 합으로 나타내는 방법의 수, 마지막에 사용한 수 j
 * d[n][1] = d[n-1][2] + d[n-1][3] (단, n이 1보다 클 경우)
 * d[n][2] = d[n-2][1] + d[n-2][3] (단, n이 2보다 클 경우)
 * d[n][3] = d[n-3][1] + d[n-3][2] (단, n이 3보다 클 경우)
 * 
 * 중복처리해줘야 함.
 * d[0][1] = d[0][2] = d[0][3] = 1 인데,
 * d[1][1] = d[0][2] + d[0][3] = 2 라는 중복이 발생
 */

#include <cstdio>
long long d[1000001][4];
const long long mod = 1000000009LL;
const int limit = 100000;
int main() {
    for (int i=1; i<=limit; i++) {
        if (i-1 >= 0) {
            d[i][1] = d[i-1][2] + d[i-1][3];
            if (i == 1) {
                d[i][1] = 1;
            }
        }
        if (i-2 >= 0) {
            d[i][2] = d[i-2][1] + d[i-2][3];
            if (i == 2) {
                d[i][2] = 1;
            }
        }
        if (i-3 >= 0) {
            d[i][3] = d[i-3][1] + d[i-3][2];
            if (i == 3) {
                d[i][3] = 1;
            }
        }
        d[i][1] %= mod;
        d[i][2] %= mod;
        d[i][3] %= mod;
    }
    int t;
    scanf("%d",&t);
    while (t--) {
        int n;
        scanf("%d",&n);
        printf("%lld\n",(d[n][1] + d[n][2] + d[n][3])%mod);
    }
}