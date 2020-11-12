/**
 ** N과 M (1)
 * 
 * 만약 n=5, m=3 이라면 123, 124, 125, 132, 134, 135 ....
 * (3)        (2)         (_)
 * 5가지  4가지(3빼고)  3가지(3,2제외)
 * 
 */

#include <iostream>
using namespace std;
bool check[10]; // 이전에 사용한 숫자는 false
int a[10];
void go(int index, int n, int m) {  //0, 5, 3/ 1, 5,3
    // index가 마지막 자릿수일 때
    if (index == m) {
        for (int i=0; i<m; i++) {
            cout << a[i];
            if (i != m-1) {
                cout << ' ';
            }
        }
        cout << '\n';
        return;
    }
    for (int i=1; i<=n; i++) {
        if(check[i]) continue;  // 전에 사용한 수는 제외
        check[i] = true;
        a[index] = i;
        go(index+1, n, m);
        check[i] = false;
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    go(0, n, m);
    return 0;
}
