#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <vector> // vector 쓰기 위해서 필요
#include <algorithm> // sort함수 쓰기 위해서 필요
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int parent[100001];
vector<string>mf;
vector<pair<int, pair<int, int>>>graph;
vector<int>v;

int find(int x) {
	if (x == parent[x])
		return x;
	else
		return parent[x]= find(parent[x]);
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);
	
	parent[b]= a;
}


int main() {
	setting;
	int size = 0;
	int tot = 0;
	int cnt = 0;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		string gen;
		cin>>gen;
		mf.push_back(gen);
		parent[i] = i;
	}
	
	for (int i = 0; i < m; i++) {
		int a, b, c; // a,b를 연결하는 길 c 유지비
		cin >> a >> b >> c;
		graph.push_back({c,{a,b}});
	}
	sort(graph.begin(), graph.end());

	for (int i = 0; i < m; i++) {
		if ((find(graph[i].second.first) != find(graph[i].second.second))) {
			if (mf[graph[i].second.first-1] != mf[graph[i].second.second-1]) {
				Union(graph[i].second.second, graph[i].second.first);
				size += graph[i].first;
				cnt++;
			}
				
		}
	}
	if (cnt == n - 1)
		cout << size;
	else
		cout << -1;
	return 0;
}