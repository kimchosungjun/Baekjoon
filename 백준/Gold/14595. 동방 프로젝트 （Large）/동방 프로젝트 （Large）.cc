#include<iostream>
#include<algorithm>
#include<vector>

#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define MAX 10000010
using namespace std;

int n, m;
int x, y;
int parent[MAX];
int imos[MAX];
vector<pair<int, int>>v;
int st, ed;

int main() {
	setting;
	cin >> n>>m;
	if (m == 0) {
		cout << n;
		return 0;
	}
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		v.push_back({ x,y });
	}
	
	sort(v.begin(), v.end());
	st = v[0].first;
	ed = v[0].second;
	int cnt;
	cnt= st - 1;
	
	for (int i = 1; i < v.size(); i++) {
		if (ed > v[i].first) {
			if (ed < v[i].second)
				ed = v[i].second;
		}
		else
		{
			cnt++;
			cnt += v[i].first - ed-1;
			st = v[i].first;
			ed = v[i].second;
		}
	}
	cnt += n - ed;
	cout << cnt+1;
	return 0;
}