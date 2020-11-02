/**
 * 1,2,3 더하기3 (15998)
 * 
 * d[n] = d[n-1] + d[n-2] + d[n-3]
 */

#include <cstdio>
using namespace std;

long long mod = 1000000009;
long long d[1000000];
int main() {
    d[0] = 1;
    for (int i=1; i <=1000000; i++) {
        if (i-1 >= 0) {
            d[i] = 1;
        }
        if (i-2 >= 0) {
            d[i] = 2;
        }
        if (i-3 >= 0) {
            d[i] = d[i-1] + d[i-2] + d[i-3];
        }
        d[i] %= mod; 
    }
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", d[n]);
    }
    return 0;
}