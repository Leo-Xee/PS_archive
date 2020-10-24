/**
 * 카드 구매하기 (11052)
 * 
 * D[n] = n개를 갖기 위해 지불해야 하는 금액의 최댓값
 * D[n] = max(D[n-i] + P[i]), 1 <= i <= n
 * 
 * 시간복잡도 : O(N^2)
 * 
 */

#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n+1);
    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }
    vector<int> d(n+1);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            d[i] = max(d[i], d[i-j] + a[j]);
        }
    }
    printf("%d\n", d[n]);
    return 0;
}
