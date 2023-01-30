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

ll candy[100001];
ll m, n;
ll sum = 0;
ll ans = 0;
ll num;
int main() {
	cin >> m >> n;
	sum = -m;
	for (int i = 0; i < n; i++) {
		cin >> candy[i];
		sum += candy[i];
	}
	sort(candy, candy + n);
	for (int i = 0; i < n; i++) {
		num = min(candy[i], sum / (n - i));
		ans += num * num;
		sum -= num;
	}
	cout << ans;
	return 0;
}