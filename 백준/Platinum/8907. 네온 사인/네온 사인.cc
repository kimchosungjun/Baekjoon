#include <iostream>
#include <cstring>
#define setting ios::sync_with_stdio(NULL),cin.tie(NULL),cout.tie(NULL)
using namespace std;

int cnt[1000];

void findCnt(int n) {
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += cnt[i] * (n - 1 - cnt[i]);
	}
	int result = (n * (n - 1) * (n - 2))/6 - (sum / 2);
	cout << result;
}


int main()
{
	setting;
	int t, n;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int i = 0; i < n ; i++) {
			for (int j = i + 1; j < n ; j++) {
				int color;
				cin >> color;
				cnt[i] += color;
				cnt[j] += color;
			}
		}
		findCnt(n);
		memset(cnt, 0, sizeof(cnt));
		cout << '\n';
	}
	return 0;
}
