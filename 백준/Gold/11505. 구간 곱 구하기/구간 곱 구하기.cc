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

ll n, m, k, ans, h=1;
vector<ll>tree, num;

void update(ll index, ll value) {
	index += h;
	tree[index] = value;
	while (index > 1) {
		index /= 2;
		tree[index] = tree[index * 2] * tree[index * 2 + 1]% 1000000007;
	}
}

ll query(ll l, ll r, ll node, ll nodel, ll noder) {
	if (l <= nodel && noder <= r)
		return tree[node];
	if (noder < l || r < nodel)
		return 1;
	ll mid = (nodel + noder) / 2;
	return query(l, r, node * 2, nodel, mid) * query(l, r, node * 2 + 1, mid + 1, noder) % 1000000007;
}

int main() {
	setting;
	cin >> n >> m >> k;
	while (n > h)h <<= 1;
	tree.resize(h * 2);
	num.resize(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		update(i, num[i]);
	}

	for (int i = 0; i < m + k; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		if (a == 1)
			update(b - 1, c);
		else {
			ans = query(b, c, 1, 1, h);
			cout << ans << '\n';
		}
	}
	return 0;
}