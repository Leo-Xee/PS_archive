/**
 * 일곱 난쟁이 (2309)
 * 
 * 9명 중에 7명을 찾는 경우의 수 = 9C7 = 9C2 = 36
 * 
 */

#include <iostream>
#include <algorithm>
using namespace std;

int talls[9];
int n = 9;
int main() {
    int sum = 0;
    for (int i=0; i<n; i++) {
        cin >> talls[i];
        sum += talls[i];
    }
    // 오름차순 정렬
    sort(talls, talls + n);
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            // 전체 키의 합 - 가짜1 - 가짜2 == 100
            if (sum - talls[i] - talls[j] == 100) {
                for (int k=0; k<n; k++) {
                   if (i == k || j == k) continue;  // ??
                        cout << talls[k] << '\n';
                }
                return 0;
            }
        }
    }
}