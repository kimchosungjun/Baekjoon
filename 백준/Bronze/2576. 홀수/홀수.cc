#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
	setting;
	int n, min=101;
	int sum = 0, cnt=0;
	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2 == 0)
			continue;
		else {
			sum += n;
			cnt++;
			if (min > n)
				min = n;
		}
	}

	if (cnt == 0)
		cout << -1;
	else {
		cout << sum<<'\n';
		cout << min;
	}
	return 0;
}
