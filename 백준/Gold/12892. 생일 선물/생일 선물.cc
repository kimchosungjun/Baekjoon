#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
const int INF = 1e9 + 7;

ll sum = 0;
ll d, p, v;
ll dif = 0;
ll diff = 0;
int st, en;
ll maxi = -1;
int n;
vector<pair<ll, ll>>pv;

int main() {
	setting;
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> p >> v;
		pv.push_back({ p,v });
		sum += v;
	}
	sort(pv.begin(), pv.end());
	dif = pv[n - 1].first - pv[0].first;
	st = 0, en = 0;
	if (dif >= d) {
	
		sum = 0;
		while (true) {
			if (en == n || st == n)
				break;
			diff = pv[en].first - pv[st].first;
			if (diff < d) {
				sum += pv[en].second;
				en++;
				maxi = max(maxi, sum);
			}
			else {
				sum -= pv[st].second;
				st++;
			}
		}
		cout << maxi;
	}
	else {
		cout << sum;
		return 0;
	}
	return 0;
}