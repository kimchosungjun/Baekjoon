#include<iostream>

using namespace std;
#define setting ios::sync_with_stdio(NULL), cin.tie(0), cout.tie(0)

int arr[6][1000];
int sum[1000];

int main() {
	setting;

	int n;
	cin >> n;

	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= 5; i++) {
			cin >> arr[i][j];
			sum[j] += arr[i][j];
		}
	}
	int temp; // 1의자리를 받는 변수

	int idx = -1; // 1등
	int maxi = -1; // 가장 높은 수
	for (int k = 1; k <= n; k++) {
		for (int j = 1; j <= 5; j++) {
			for (int i = j+1; i <= 5; i++) {
				temp = sum[k] - arr[i][k] - arr[j][k];
				temp %= 10;
				if (temp >=maxi) {
					maxi = temp;
					idx = k;
				}
			}
		}
	}

	cout << idx;
	

	return 0;
}