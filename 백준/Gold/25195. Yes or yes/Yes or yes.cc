#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
vector<int>edge[100001];
vector<int>gom;
bool visited[100001];
bool check = false;
int cnt = 0;
int sum = 0;

void dfs(int k) {
	for (int i = 0; i < gom.size(); i++) {
		if (k == gom[i]) {
			return;
		}
	}
	
	visited[k] = true;
	for (int i = 0; i < edge[k].size(); i++) {
		if (!visited[edge[k][i]])
			dfs(edge[k][i]);
	}
	if (edge[k].size() == 0)
		check = true;
}

int main() {
	setting;
	int n, m;
	int u, v;
	int s,sl;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		edge[u].push_back(v);
	}
	cin >> s;
	for (int i = 0; i < s; i++) {
		cin >> sl;
		gom.push_back(sl);
	}
	dfs(1);
	if (check)
		cout << "yes";
	else
		cout << "Yes";
	return 0;
}
