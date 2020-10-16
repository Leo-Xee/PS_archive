/* 
 * 최대공약수와 최소공배수 (2609)  
 */

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}
int lcm(int a, int b) {
    int g = gcd(a, b);
    return g * (a/g) * (b/g);
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    cout << gcd(n1, n2) << '\n';
    cout << lcm(n1, n2) << '\n';
    return 0;
}