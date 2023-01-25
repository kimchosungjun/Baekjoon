#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
#include<cmath>
#include<vector>
#define setting cin.tie(NULL),cout.tie(NULL),ios::sync_with_stdio(NULL)  
using namespace std;
const int INF=1e9;
vector<pair<int, int>>edge[100001];
int n, m;
int s, t;
void dijkstra() {
	// s를 시작지점, t를 도착지점으로 생각하자.
	vector<int>dist(n + 1, INF);
	priority_queue<pair<int, int>>pq; // 큰 수부터 출력
	dist[s] = 0;
	pq.push({ 0,s });
	while (!pq.empty()) {
		int cost = -pq.top().first;
		int here = pq.top().second;
		pq.pop();
		if (dist[here] < cost)
			continue;
		for (int i = 0; i < edge[here].size(); i++) {
			int next = edge[here][i].first;
			int nextcost = edge[here][i].second;
			if (dist[next] > dist[here] + nextcost)
			{
				dist[next] = dist[here] + nextcost;
				pq.push({ -nextcost,next });
			}
		}
	}
	cout << dist[t];
}

int main() {
	setting;
	int a, b, c;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		edge[a].push_back({ b,c });
		edge[b].push_back({ a,c });
	}
	cin >> s >> t; 
	dijkstra();
	
	return 0;
}