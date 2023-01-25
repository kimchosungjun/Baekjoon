#include <iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
typedef long long int ll;
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int map[1001][1001];
int visited[1001][1001];
int cnt[1001][1001];
int nx[4] = {0,0,1,-1};
int ny[4] = { 1,-1,0,0 };
queue<pair<int, int>>q;

void bfs(int stx, int sty) {
	cnt[stx][sty] = 0;
	visited[stx][sty] = true;
	q.push({ stx,sty });
	while (!q.empty()) {
		int stx = q.front().first;
		int sty = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nex = stx + nx[i];
			int ney = sty + ny[i];
			if (nex <= 1000 && nex >= 0 &&ney>=0&&ney<=1000) {
				if (visited[nex][ney] == false&& map[nex][ney] != 1) {
					q.push({ nex, ney });
					visited[nex][ney] = true;
					cnt[nex][ney] = cnt[stx][sty] + 1;
				}
			}
		}
	}
}

int main() {
	setting;
	int x, y, n;
	cin >> x >> y >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		map[a + 500][b + 500] = 1; // 웅덩이
	}
	map[x + 500][y + 500] = 2;
	bfs(500, 500);
	cout << cnt[x + 500][y + 500];
	return 0;
}

