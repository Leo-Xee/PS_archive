/**
 * 곱셈 (1629)
 * 
 * n^a * n^b = n^(a+b)
 */

#include <iostream>
using namespace std;
using ll = long long;

int go(ll a, ll b, ll c) {
    if (b == 1) return a % c;
    ll val = go(a, b/2, c);
    val = val * val % c;
    if (b % 2 == 0) return val;
    return val * a % c;
}
int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    cout << go(a, b, c);
    return 0;
}