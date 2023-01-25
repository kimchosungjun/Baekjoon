#include<iostream>
using namespace std;

int arr[100001];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n,m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	for (int i = 0; i < m; i++) {
		int f_index,l_index;
		cin >> f_index >> l_index;
		cout << arr[l_index] - arr[f_index-1]<<'\n';
	}

	return 0;
}