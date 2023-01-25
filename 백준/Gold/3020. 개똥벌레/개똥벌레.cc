#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[500001];
int total;
int cnt = 0;
long long int mini;
void imos(int h){ 
	total = 0;
	mini = arr[0];
	for (int i = 0; i < h; i++) {
		total += arr[i];
		arr[i] = total;
		if (arr[i] < mini) {
			cnt = 0;
			mini = arr[i];
			cnt++;
		}
		else if (mini == arr[i]) {
			cnt++;
		}
	}
	cout << mini << ' ' << cnt;
}

int main() {
	setting;
	int n, h; // 0부터 h높이까지
	int height;
	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		cin >> height;
		if (i % 2 == 0) {
			arr[0] += 1;
			arr[height] -= 1;
		}
		else {
			arr[h] -= 1;
			arr[h - height] += 1;
		}
	}
	imos(h);
	return 0;
}