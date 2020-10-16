/* 
 * 조합 0의 개수 (2004)
 * 
 * 조합의 경우 2의 개수가 5의 개수보다 더 적을 수도 있기 때문에
 * 2와 5의 개수를 전부 고려해줘야한다.
 */

#include <iostream>
using namespace std;

int main() {
    long long two = 0, five = 0;
    long long n, m;
    int result;
    cin >> n >> m;

    // nCm의  인자 중 2의 개수 
    // = n!의 2의 개수 - (n-m)!의 2의 개수 - m!의 2의 개수
    for (long long i = 2; i <= n; i *= 2) {
        two += n / i;
    }
    for (long long i = 2; i <= n-m; i *= 2) {
        two -= (n-m) / i;
    }
    for (long long i = 2; i <= m; i *= 2) {
        two -= m / i;
    }

    // nCm의 인자 중 5의 개수 
    // = n!의 5의 개수 - (n-m)!의 5의 개수 - m!의 5의 개수
    for (long long i = 5; i <= n; i *= 5) {
        five += n / i;
    }
    for (long long i = 5; i <= n-m; i *= 5) {
        five -= (n-m) / i;
    }
    for (long long i = 5; i <= m; i *= 5) {
        five -= m / i;
    }
    // two과 five의 최소값
    if (two > five) {
        result = five;
    } else {
        result = two;
    }
    cout << result << '\n';
    return 0;
}