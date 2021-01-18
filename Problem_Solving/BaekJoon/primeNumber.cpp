/*
 * 기본 소수 알고리즘들
 */

#include <iostream>
using namespace std;

// 기본적인 소수 검색방법(O(n))
bool prime1(int n) {
    if (n < 2) {
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

// (O(n/2))
bool prime2(int n) {
    if(n < 2) {
        return false;
    }
    for(int i = 2; i < i/2; i++) {
        if(n % i == 0) {
            return false;
        }
    return true;
    }
}

// O(√N)
bool prime3(int n) {
    if(n < 2) {
        return false;
    }
    for(int i = 2; i * i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    cout << prime3(16) << '\n';
    return 0;
}