/* 
 * 소수 찾기 (1978)
 */

#include <iostream>
using namespace std;

// 소수 여부 검사
bool is_prime(int n) {
    if(n < 2) {
        return false;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if(is_prime(num)) {
            cnt += 1;
        }
    }

    cout << cnt << '\n';
    return 0;
}