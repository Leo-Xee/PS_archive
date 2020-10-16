/*
 * 최소공배수 (1934)
 */

#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return GCD(b, a%b);
    }
}

int main() {
    int N;
    cin >> N;

    while(N--) {
        int n1, n2;
        cin >> n1 >> n2;
        int g = GCD(n1, n2);
        cout << n1 * n2 / g << '\n';
    }

    return 0;
}