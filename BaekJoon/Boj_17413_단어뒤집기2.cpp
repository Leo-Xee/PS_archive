/**
 * 단어뒤집기2 (17413)
 */

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    stack<char> st;
    getline(cin, s);
    s += '\n';
    bool check = false;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '<') {
           while(!st.empty()) {
               cout << st.top();
               st.pop();
           }
           cout << '<';
           check = true;
        } else if (s[i] == '>') {
            cout << '>';
            check = false;
        } else if (s[i] == ' ' || s[i] == '\n') {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            } 
            cout << ' ';
        } else if (check) {
            cout << s[i];
        } else {
            st.push(s[i]);
        }
    }
    return 0;
}