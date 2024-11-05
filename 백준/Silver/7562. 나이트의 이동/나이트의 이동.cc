#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring> // memset 사용
#define Max 1e9
typedef long long ll;
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

bool visited[301][301] = { 0, };
queue<pair<pair<int, int>, int>> que;
int dx[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int res = Max;

void Search(pair<int, int> st, pair<int, int> ed, int width, int cnt) {
    que.push({ st, cnt });
    visited[st.first][st.second] = true; // 시작점 방문 표시

    while (!que.empty()) {
        int x = que.front().first.first;
        int y = que.front().first.second;
        cnt = que.front().second;
        que.pop();

        // 도착점에 도달하면 최소값 업데이트
        if (x == ed.first && y == ed.second) {
            res = cnt;
            return;
        }

        // 나이트의 8가지 이동을 탐색
        for (int i = 0; i < 8; i++) {
            int nex = x + dx[i];
            int ney = y + dy[i];

            // 체스판 범위 내에서 아직 방문하지 않은 경우에만 추가
            if (nex >= 0 && nex < width && ney >= 0 && ney < width && !visited[nex][ney]) {
                visited[nex][ney] = true; // 방문 표시
                que.push({ {nex, ney}, cnt + 1 });
            }
        }
    }
}

int main() {
    setting;
    int t;
    cin >> t;

    int w, stx, sty, edx, edy;
    for (int i = 0; i < t; i++) {
        cin >> w;
        cin >> stx >> sty;
        cin >> edx >> edy;

        pair<int, int> start = { stx, sty };
        pair<int, int> end = { edx, edy };

        if (start == end) {
            cout << 0 << "\n";
        }
        else {
            res = Max;
            memset(visited, false, sizeof(visited));
            while (!que.empty()) que.pop(); // 큐 초기화
            Search(start, end, w, 0);
            cout << res << "\n";
        }
    }
    return 0;
}
