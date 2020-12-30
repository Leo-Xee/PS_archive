/**
 * LIS 4 (14002) <<다시 풀어보기>>
 * 
 * 실제로 그 값이 어떻게 나왔는지를 묻는다면, 
 * 어떤 값이 왜 바뀌었는지 모두 기록해서 역추적하면 된다.
 * 역추적은 재귀로 가능
 * 
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int n, d[1001], a[1001], v[1001];
int sum = 0;
void go(int p) {
    if (p == -1) {
        return ;
    }
    go(v[p]);
    printf("%d ", a[p]);
}

int main() {
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++) {
        d[i] = 1;
        v[i] = -1;
        for (int j=0; j<i; j++) {
            if (a[j] < a[i] && d[i] < d[j]+1) {
                d[i] = d[j]+1;
                v[i] = j;
            }
        }
    }
    // d[i]가 LIS일떄의 i 구하기
    int ans = d[0];
    int p = 0;
    for (int i=0; i<n; i++) {
        if (ans < d[i]) {
            ans = d[i];
            p = i;
        }
    }

    printf("%d\n", ans);
    go(p);
    printf("\n");
    return 0;
}