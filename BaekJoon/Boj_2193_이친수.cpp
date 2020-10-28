/**
 * 이친수 (2193)
 * 
 * D[i][j] = i자리 이친수의 개수, 마지막 수 j
 */

#include <cstdio>
using namespace std;

long long d[91][2];
int main() {
    int n;
    scanf("%d", &n);
    
    d[1][0] = 0;
    d[1][1] = 1;
    for (int i=2; i<=n; i++) {
        for (int j=0; j<=1; j++) {
            if (j == 0) {
                d[i][j] = d[i-1][0] + d[i-1][1];
            }
            if (j == 1) {
                d[i][j] = d[i-1][0];
            }
        }
    }
    long long cnt = 0;
    for (int i=0; i<=1; i++) {
        cnt += d[n][i];
    }
    printf("%lld\n", cnt);
    return 0;
}

/**
 *  1차원 dp 풀이
 */

// long long d[91];
// int main() {
//     int n;
//     cin >> n;
//     d[1] = 1;
//     d[2] = 1;
//     for (int i=3; i<=n; i++) {
//         d[i] = d[i-1] + d[i-2];
//     }
//     cout << d[n] << '\n';
//     return 0;
// }