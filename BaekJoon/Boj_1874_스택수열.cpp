/* 
 * 스택 수열 (1874)
 */

#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    int N;
    cin >> N;
    stack<int> s;
    string ans;
    int m = 0;
    
    while(N--) {
        int x;
        cin >> x;
        // pop 값이 스택의 top 값보다 클 때
        if(x > m) {
            while(x > m) {
                s.push(++m);
                ans += '+';
            }
            s.pop();
            ans += '-';
        } else {
            bool found = false;
            if(!s.empty()) {
                int top = s.top();
                s.pop();
                ans += '-';
                if(x == top) {
                    found = true;
                }
            }
            if(!found) {
                cout << "NO" << '\n';
                return 0;
            }
        }
    }
    for(auto x : ans) {
        cout << x << '\n';
    }
    return 0;
};