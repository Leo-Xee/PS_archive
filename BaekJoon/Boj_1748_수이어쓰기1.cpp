/**
 * 수 이어 쓰기 1 (1748)
 * 
 ** N이 너무 크기 때문에 시간이 너무 오래 걸리고 숫자가 붙여지기 때문에 공간 크기도 많이 잡아 먹는다.
 ** ex. N=150인 자릿수를 구하면,
 * 1 ~ 9 = 1 * 9 = 10
 * 10 ~ 99 = 2 * (99 - 10 + 1)
 * 100 ~ 120 = 3 * (120 -100 + 1)
 ** 이렇게 묶어서 계산하면 시간과 공간안에서 해결할 수 있다.
 * 
 ** 시간복잡도 : O(N)
 * 
 */

#include <cstdio>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    long long ans = 0;
    for (int start=1, len=1; start<=n; start*=10, len++) {
        int end = start * 10 - 1;
        if (end > n) {
            end = n;
        }
        ans += (long long)(end - start + 1) * len;
    }
    printf("%lld", ans);
}