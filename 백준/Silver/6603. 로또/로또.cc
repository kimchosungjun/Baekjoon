#include<iostream>
#include<algorithm>
#include<cmath>
#include<queue>
#define setting ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int arr[15];
int ans[15] = { 0, };
bool visited[15];
int k;
int maxi;

void go(int loc) {
	if (loc == 6) {
		maxi = -1;
		for (int i = 0; i < 6; i++) {
			if (maxi < ans[i])
				maxi = ans[i];
			else
				return;
		}
		for (int i = 0; i < 6; i++) {
			cout << ans[i] << ' ';
		}
		cout <<'\n';
		return;
	}
	else {
		for (int i = 0; i < k; i++) {
			if (!visited[i]) {
				ans[loc] = arr[i];
				visited[i] = true;
				go(loc + 1);
				ans[loc] = 0;
				visited[i] = false;
			}
		}
	}
}

int main() {
	setting;
	int num;
	cin >> k;
	while (k != 0) {
		for (int i = 0; i < k; i++) {
			cin >> num;
			arr[i] = num;
		}
		go(0);
		cout << '\n';
		cin >> k;
	}
	return 0;
}