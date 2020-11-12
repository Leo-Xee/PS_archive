/**
 * 카잉 달력 (6064)
 * 
 * 건너뛰기
 * 
 * 시간복잡도 : O(N)
 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int M, N, x, y;
        cin >> M >> N >> x >> y;
        x -= 1;
        y -= 1;
        bool ok = false;
        for (int i=x; i<(M*N); i+=M) {
            if (i%N == y) {
                cout << i+1 << '\n';
                ok = true;
                break;
            }
        }
        if (!ok) {
            cout << -1 << '\n';
        }
    }
    return 0;
}