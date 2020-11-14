/** 
 * 연결 요소의 개수 (11724)
 * 
 * DFS와 BFS 모두 연결된 정점을 다 탐색하는 알고리즘이기 때문에
 * 두 방법으로 다 풀 수 있다.
 */

#include <cstdio>
#include <vector>
using namespace std;
vector<int> v[1001];
bool check[1001];

void dfs(int node) {
    check[node] = true;
    for (int i=0; i<v[node].size(); i++) {
        int next = v[node][i];
        if (check[next] == false) {
            dfs(next);
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    while(m--) {
        int from, to;
        scanf("%d %d", &from, &to);
        v[from].push_back(to);
        v[to].push_back(from);
    }
    int cnt = 0;
    for (int i=1; i<=n; i++) {
        if (check[i] == false) {
            dfs(i);
            cnt += 1;
        }
    }
    printf("%d\n", cnt);
    return 0;
}