/**
 * ABCDE (13023)
 * 
 * 정점: 사람, 간선: 친구관계
 * A - B - C - D - E 
 * 간선리스트로 A-B, C-D / 인접행렬로 B-C / 인접리스트로 D-E
 * 
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool a[2000][2000];     // 인접행렬
vector<int> g[2000];    // 인접리스트
vector<pair<int, int>> edges;   // 간선리스트
int main() {
    int n, m; // 사람의 수, 친구관계의 수
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int from, to;
        cin >> from >> to;
        // 관계를 간선리스트에 저장
        edges.push_back({from, to});
        edges.push_back({to, from});
        // 인접 행렬에 저장
        a[from][to] = a[to][from] = true;
        // 인접리스트에 저장
        g[from].push_back(to);
        g[to].push_back(from);
    }
    m *= 2; // 저장할 때 간선을 양방향으로 저장했으므로 관계를 2배
    for (int i=0; i<m; i++) {
        for (int j=0; j<m; j++) {
            // A - B
            int A = edges[i].first;     // 0: <(F), T>
            int B = edges[i].second;    // 0: <F, (T)>
            // C - D
            int C = edges[j].first;
            int D = edges[j].second;
            // 같은 사람이 있으면 건너뜀
            if (A == B || A == C || A == D || B == C || B == D || C == D) {
                continue;
            }
            // B - C: 인접행렬로 (BC가 친구면 계속, 아니면 건너뜀)
            if (!a[B][C]) {
                continue;
            }
            // D - E: 인접리스트
            for (int E : g[D]) {
                if (A == E || B == E || C == E || D == E) {
                    continue;
                }
                cout << 1 << '\n';
                return 0;
            }
        }
    }
    cout << 0 << '\n';
    return 0;
}