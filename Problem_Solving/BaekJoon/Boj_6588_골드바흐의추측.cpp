/* 
 * 골드바흐의 추측 (6588)
 * 
 * 2보다 큰 모든 짝수는 두 소수의 합으로 표현 가능하다.
 * 5보다 큰 모든 홀수는 세 소수의 합으로 표현 가능하다 
 * 10^18까지 증명되어 있다.
 * 그냥 에라토스테네스의 체를 사용해 문제를 푼다.
 */

#include <iostream>
using namespace std;

int main() {
    // cstdio와 iostream의 stream 동기화 해제
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    const int MAX = 1000000;
    int primes[MAX];        // 전체 소수
    int pn = 0;             // 소수 개수
    bool check[MAX+1];      // 0을 포함한 전체 소수의 bool값

    for(int i = 2; i <= MAX; i++) {
        if(check[i] == false) {
            primes[pn++] = i;
            for(int j = i+i; j <= MAX; j = i+j) {
                check[j] = true;
            }
        }
    }

    while(true) {
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }
        // 
        for(int i = 1; i < pn; i++) {
            if(check[n - primes[i]] == false) {
                cout << n << " = " << primes[i] << " + " << n - primes[i] << '\n';
                break;
            }
        }
    }
    
    return 0;
}