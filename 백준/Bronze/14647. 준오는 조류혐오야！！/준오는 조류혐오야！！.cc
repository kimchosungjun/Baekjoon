#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int findnum(int a) {
	int temp = 0;
	while (true) {
		if (a % 10 == 9) {
			temp++;
		}
		a /= 10;
		if (a == 0) break;
	}
	return temp;
}

int main(int argc, char* argv[]) {
	int n, m,num;
	int arr[501][501];
	int r_sum, c_sum;
	int t_max=0;
	int total = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> num;
			arr[i][j] = findnum(num);
			total += arr[i][j];
		}
	}
	// 가로 9의 숫자
	for (int i = 0; i < n; i++) {
		r_sum = 0;
		for (int j = 0; j < m; j++) {
			r_sum += arr[i][j];
		}
		t_max = max(t_max, r_sum);
	}
	for (int i = 0; i < m; i++) {
		c_sum = 0;
		for (int j = 0; j < n; j++) {
			c_sum += arr[j][i];
		}
		t_max = max(t_max, c_sum);
	}
	cout << total-t_max;
}