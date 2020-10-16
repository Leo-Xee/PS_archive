/* 
 * 에라토스테네스의 체
 * 
 * 소수의 배수는 소수가 아니기 때문에
 * 소수의 배수만 다 지운다면 남는 것은 소수뿐이다.
 */

#include <iostream>
using namespace std;

// 시간복잡도 : O(NloglogN)
bool prime(int n) {
    int prime[n];  // 소수 저장
    int pn = 0;    // 소수 개수
    bool check[n]; // 지워졌으면 true
    
    for(int i = 2; i <= n; i++) {
        if(check[i] == false) {         // 지워지지 않으면(소수이면)
            prime[pn++] = i;            // 소수를 저장하고 개수 증가 
            for(int j = i * i; j <= n; j += i) {    // N의 크기에 따라 i+i or i+2 
                check[j] = true;
            }
        }
    }
}