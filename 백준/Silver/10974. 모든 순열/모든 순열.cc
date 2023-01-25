#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int num[10];
bool visited[10];
int n;

void permute(int location) {
	if (location == n+1) {
		for (int i = 1; i <= n; i++) {
			cout << num[i]<<' ';
		}
		cout << '\n';
		return;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) {
				visited[i] = true;
				num[location] = i;
				permute(location + 1);
				visited[i] = false;
				num[location] = 0;
			}
		}
	}

}

int main() {
	setting;
	cin >> n;
	permute(1);
	return 0;
}
