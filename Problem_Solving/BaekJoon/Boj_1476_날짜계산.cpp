/**
 * 날짜 계산 (1476)
 * 
 * 경우의 수 : 15 * 28 * 19 = 7980
 * E  S  M
 * 15 28 19
 */

#include <iostream>
using namespace std;
int main() {
    int E, S, M;
    cin >> E >> S >> M;

    int e=1, s=1, m=1;
    for (int i=1;; i++) {
        if (e == E && s == S && m == M) {
            cout << i << '\n';
            break;
        }
        e += 1;
        m += 1;
        s += 1;
        if (e == 16) {
            e = 1;
        }
        if (s == 29) {
            s = 1;
        }
        if (m == 20) {
            m = 1;  
        }
    }
    return 0;
}