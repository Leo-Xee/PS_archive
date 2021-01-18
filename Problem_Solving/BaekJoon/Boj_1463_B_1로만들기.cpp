/*
 * 1로 만들기 (1463)
 * 
 * Bottom up 방식
 * D[N] = N을 1로 만들 수 있는 최소 연산 횟수
 * D[N] = D[N/3] + 1 or D[N/2] + 1 or D[N-1] + 1
 *      = min(D[N/3], D[N/2], D[N-1]) + 1 이다.
 */

#include <iostream>
using namespace std;

int main() {
    int d[1000001];
    d[1] = 0;
    int n;
    cin >> n;
     
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 1;
        if (i % 2 == 0 && d[i] > d[i/2] + 1) {
            d[i] = d[i/2] + 1;
        }
        if (i % 3 == 0 && d[i] > d[i/3] + 1) {
            d[i] = d[i/3] + 1;
        }
    }
    cout << d[n] << '\n';
    return 0;
}