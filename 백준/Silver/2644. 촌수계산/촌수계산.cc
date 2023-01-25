#include<iostream>
#include<vector>
using namespace std;
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int n, n1, n2,m, x, y;
int visited[101];
vector<int>v[101];
int a;

void dfs(int to,int from, int cnt) {
	visited[to] = 1;
	if (to == from) {
		a = cnt;
	}
	for (int i = 0; i < v[to].size(); i++) {
		if (visited[v[to][i]] == 0) {
			dfs(v[to][i], from, cnt + 1);
		}
	}
}

int main() {
	cin >> n;
	cin >> n1 >> n2;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(n1, n2, 0);
	if (a == 0)
		cout << -1;
	else
		cout << a;
	return 0;
}