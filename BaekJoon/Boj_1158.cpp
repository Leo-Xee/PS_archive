/*
 * 조세퍼스 문제 (1158)
 */

#include <cstdio>
#include <queue>
using namespace std;

int main() {
    // 전체 N개의 수와 제거할 K번째
    int N, K;
    queue<int> q;
    scanf("%d %d", &N, &K);
    // cin >> N >> K;
    
    // 큐에 전체 수를 push
    for(int i = 1; i <= N; i++) {
        q.push(i);
    }
    printf("<");
    // 전체 수 N번 반복
    for(int i = 0; i < N-1; i++) {
        // K-1번 큐 뒤에 push 
        for(int j = 0; j < K-1; i++) {
            q.push(q.front());
            q.pop();
        }
            // K-1번째 요소 출력후 pop
            printf("%d, ", q.front());
            q.pop();
    }
    // 마지막 요소 출력
    printf("%d>\n", q.front());
    return 0;
}