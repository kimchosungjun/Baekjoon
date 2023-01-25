#include <iostream>
#include <vector>
#include <algorithm>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#define max_Size 1001

vector<int>adj[max_Size];
int dfsvisited[max_Size];
int ans = 0;

void dfs(int p) {
	dfsvisited[p] = 1;
	for (int i = 0; i < adj[p].size(); i++) {
		int x = adj[p][i];
		if (dfsvisited[x]==0) {
			dfs(x);
			ans++;
		}
	}
}

int main() {
	int n, m;
	
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end());
	}
	dfs(1);
	cout << ans;
	return 0;
}

