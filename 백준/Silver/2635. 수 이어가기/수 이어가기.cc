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

int maxCnt = -1;
int main() {
	setting;
	int n,cnt=0;
	int a, b, c;
	cin >> n;
	int midx = -1;
	for (int i = 1; i <= n; i++) {
		a = n;
		b = i;
		c = 1;
		cnt = 2;
		while (true) {
			c = a - b;
			a = b;
			b = c;
			if (c < 0)
				break;
			cnt++;
		}
		if (maxCnt < cnt) {
			maxCnt = cnt;
			midx = i;
		}
	}
	cout << maxCnt<<'\n' ;
	a = n;
	b = midx;
	cout << a << ' ' << b << ' ';
	while (true) {
		c = a - b;
		a = b;
		b = c;
		if (c >= 0)
			cout << c<<' ';
		else
			break;
	}
	return 0;
}