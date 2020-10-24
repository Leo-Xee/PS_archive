/**
 * 카드 구매하기2 (16194)
 * 
 * d[i] = i개 카드 구매를 위해 지불할 최솟값
 * d[i-j] + a[j] = i-j개의 카드 구매를 위해 지불할 최솟값 + j개의 카드팩의 가격
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
    vector<int> d(n+1, -1);
    d[0] = 0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if (d[i] == -1 || d[i] > d[i-j] + a[j]) {
                d[i] = d[i-j] + a[j];
            }
        }
    }
    printf("%d\n", d[n]);
    return 0;
}
