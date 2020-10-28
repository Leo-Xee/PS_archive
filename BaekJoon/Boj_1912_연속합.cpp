/**
 * 연속합 (1912)
 * 
 * i    | 1    2   3   4   5   6   7   8   9   10
 * A[i] | 10  -4   3   1   5   6  -35  12  21  -1 
 * d[i] | 10   6   9   10  15  21 -14  12  33  32   
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int d[100000];
    int a[100000];
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }
    
    d[1] = a[1];
    for (int i=2; i<=n; i++) {
        d[i] = max(a[i], d[i-1] + a[i]);
    }
    int ans = d[1];
    for (int i=1; i<=n; i++) {
        if (ans < d[i]) {
            ans = d[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}