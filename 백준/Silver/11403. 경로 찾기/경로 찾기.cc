#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

typedef long long int ll;
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
const int INF = 1e9;

int arr[101][101];
priority_queue<pair<int,int>>pq;

int main() {
	setting;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int num;
			cin >> num;
			if (num == 0)
				arr[i][j] = INF;
			else if (num == 1)
				arr[i][j] = 1;
		}
	}

	for (int k = 0; k < n; k++) {
		for (int p = 0; p < n; p++) {
			for (int q = 0; q < n; q++) {
				arr[p][q] = min(arr[p][q], arr[p][k]+ arr[k][q]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] !=INF)
				cout << 1<<' ';
			else
				cout << 0<<' ';
		}
		cout << '\n';
	}

	return 0;
}