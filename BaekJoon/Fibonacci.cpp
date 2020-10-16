/*
 * 메모라이제이션을 사용한 피보나치
 */

#include <iostream>
using namespace std;

int memo[100];
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        if (memo[n] > 0) {
            return memo[n];
        }
            memo[n] = fibonacci(n-1) + fibonacci(n-2);
            return memo[n];
    }
}

int main() {
    cout << fibonacci(15) << '\n';
    return 0;
}