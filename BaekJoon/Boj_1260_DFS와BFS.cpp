/** 
 * DFS와 BFS (1260)
 */

#include <cstdio>
#include <cstring>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v[1001];
bool check[1001];

/* 재귀 */
// void dfs(int node) {
//     check[node] = true;     // 정점 방문 체크
//     printf("%d ", node);
//     for (int i=0; i<v[node].size(); i++) {
//         int next = v[node][i];
//         if (check[next] == false) {
//             dfs(next);
//         }
//     }
// }

/* 비재귀 */
void dfs(int node) {
    stack<int> s;
    s.push(node);
    check[node] = true;
    printf("%d", node);
    while (!s.empty()) {    
        int node = s.top();
        s.pop();
        for (int i=0; i<v[node].size(); i++) {
            int next = v[node][i];
            if (check[next] == false) {
                printf(" %d", next);
                check[next] = true;
                s.push(node);
                s.push(next);
                break;
            }
        }
    }
}

void bfs(int start) {
    queue<int> q;
    memset(check, false, sizeof(check));    // check를 false로 초기화
    check[start] = true;
    q.push(start);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        printf("%d ", node);
        for (int i=0; i<v[node].size(); i++) {
            int next = v[node][i];
            // 방문 안했으면
            if (check[next] == false) {
                check[next] = true;
                q.push(next);
            }
        }
    }
}


int main() {
    int n, m, start;
    scanf("%d %d %d", &n, &m, &start);
    while(m--) {
        int from, to;
        scanf("%d %d", &from, &to);
        v[from].push_back(to);
        v[to].push_back(from);
    }
    for (int i=1; i<=n; i++) {
        sort(v[i].begin(), v[i].end());
    }
    dfs(start);
    puts("");
    bfs(start);
    puts("");
    return 0;
}