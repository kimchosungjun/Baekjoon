#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <vector> // vector 쓰기 위해서 필요
#include <algorithm> // sort함수 쓰기 위해서 필요
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int parent[100001];

vector<pair<int, pair<int, int>>>graph;
vector<int>v;
int n, m, t;
int increase = 0;
int total = 0;

int find(int x) {
	if (x == parent[x])
		return x;
	else
		return parent[x]= find(parent[x]);
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);
	if(a!=b)
		parent[b]= a;
}


int main() {
	setting;
	cin >> n >> m >> t;
	for (int i = 0; i <= n; i++) {
		parent[i] = i;
	}
	for (int j = 0; j < m; j++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph.push_back(make_pair(c, make_pair(a, b)));
	}
	sort(graph.begin(), graph.end());

	for (int p = 0; p < m; p++) {
		if (find(graph[p].second.second) != find(graph[p].second.first)) {
			Union(graph[p].second.first, graph[p].second.second);
			total += graph[p].first;
		}
	}
	increase = (n - 1) * (n - 2) / 2 * t;
	cout << total + increase;
	return 0;
}