/**
 * 쇠막대기 (10799)
 */

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    stack<int> st;
    cin >> s;
    int ans = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            if (st.top()+1 == i) {
                st.pop();
                ans += st.size();
            } else {
                st.pop();
                ans += 1;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
