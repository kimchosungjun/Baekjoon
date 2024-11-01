#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define Max 100001
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

vector<int>v[Max];
int result[Max];
queue<int>q;
bool visited[Max] = { 0, };

void BFS(int r) {
    int cnt = 0;
    q.push(r);
    visited[r] = true; // 큐에 넣기 전에 방문 체크

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cnt += 1;
        result[current] = cnt;

        for (int next : v[current]) {
            if (!visited[next]) {
                visited[next] = true; // 큐에 넣기 전에 방문 체크
                q.push(next);
            }
        }
    }
}

int main()
{
    setting;
    int n, m, r;
    cin >> n >> m >> r;

    int start, end;
    for (int i = 0; i < m; i++) {
        cin >> start >> end;
        v[start].push_back(end);
        v[end].push_back(start);
    }

    for (int i = 1; i <= n; i++) {
        sort(v[i].begin(), v[i].end()); // 각 노드의 인접 리스트 정렬
    }

    BFS(r);

    for (int i = 1; i <= n; i++) {
        cout << result[i] << "\n";
    }
    return 0;
}