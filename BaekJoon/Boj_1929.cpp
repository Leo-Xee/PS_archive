/* 
 * 소수 구하기 (1929)
 */
#include <iostream>
using namespace std;

int main() {
    const int MAX = 1000000;
    bool check[MAX];    // 소수가 아니면 true(지워지면 true)
    check[0] = check[1] = true;
    
    for(int i = 2; i <= MAX; i++) { // i 대신 i*i하면 왜 조금 더 빠른가?
        // 지워지지 않은 최소값이면(소수이면)
        if(check[i] == false) {
            for(int j = i+i; j <= MAX; j = i+j) {
                check[j] = true;
            }
        }
    }

    int M, N;
    cin >> M >> N;

    for(int i = M; i <= N; i++) {
        if(check[i] == false) {
            cout << i <<'\n';
        }
    } 
    return 0;
}