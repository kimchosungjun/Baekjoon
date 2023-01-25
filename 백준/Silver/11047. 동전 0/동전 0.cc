#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

typedef long long int ll;
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int arr[11];

int main(){
	setting;
	int n, k;
	cin >> n >> k;
	
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[i] = a;
	}
	int idx = n - 1;
	int cnt = 0;
	while (k) {
		while (k - arr[idx]>=0) {
			k -= arr[idx];
			cnt++;
		}
		idx--;
	}
	cout << cnt;
	return 0;
}