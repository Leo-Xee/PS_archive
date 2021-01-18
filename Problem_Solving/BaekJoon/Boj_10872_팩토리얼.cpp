/*
 * 팩토리얼 (10872) 
 */

#include <iostream>
using namespace std;

int factorial(int n) {
    if(n > 1) {
        return n * factorial(n -1); 
    } else {
        return 1;
    }
}

int main() {
    int num;
    cin >> num;
    cout << factorial(num) << '\n';
    return 0;
}