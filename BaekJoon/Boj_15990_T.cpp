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
using namespace std;

long long d[1000001][4];
const long long Mod = 1000000009LL;

long long go(int i, int j) {
   if (i < 0)  return 0;
   if (i == j) return 1;
   if (d[i][j] > 0) return d[i][j];
   if (j == 1) {
       d[i][j] = go(i-1, 2) + go(i-1, 3);
       d[i][j] %= Mod;
   }
   if (j == 2) {
       d[i][j] = go(i-2, 1) + go(i-2, 3);
       d[i][j] %= Mod;
   }
   if (j == 3) {
       d[i][j] = go(i-3, 1) + go(i-3, 2);
       d[i][j] %= Mod;
   }
   return d[i][j];
}


int main() {
    int t;
    scanf("%d", &t);
    
    while(t-- > 0) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", (go(n, 1) + go(n, 2) + go(n, 3)) % Mod );
    }
    return 0;
}