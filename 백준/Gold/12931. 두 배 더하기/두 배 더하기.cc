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

int arr[100];
int res[100];
int ans = 0;
bool check;
bool once;

int main() {
	setting;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		res[i] = a;
	}
	while (true) {
		once = false;
		for (int i = 0; i < n; i++) {
			if (res[i] != 0) {
				once = true;
				break;
			}
		}
		if (!once) {
			cout << ans;
			return 0;
		}
		check = false;
		for (int i = 0; i < n; i++) {
			if (res[i] % 2 != 0) {
				res[i]--;
				ans++;
				check = true;
			}
		}
		if (!check) {
			for (int i = 0; i < n; i++) {
				res[i] /= 2;
			}
			ans++;
		}
		
	}
	return 0;
}