/* 
 * 팩토리얼 0의 개수 (1676)
 */

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int n;
    int cnt = 0;
    cin >> n;

    // 인수로 5가 1개씩 더 들어갈 때마다 한번 더 세어줘야 함.
    // eg. 5, 5*5, 5*5*5, ... n
    for (int i = 5; i <= n; i *= 5) {
        cnt += n / i;
    }

    cout << cnt << '\n';
    return 0;
}
