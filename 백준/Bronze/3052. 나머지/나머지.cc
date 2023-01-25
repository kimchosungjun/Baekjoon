#include <iostream>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int main() {
	setting;
	int arr[1000]={0,};
	int a,b;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		b = a % 42;
		arr[b]++;
	}

	int count = 0;
	for (int i = 0; i < 42; i++) {
		if (arr[i] != 0) {
			count++;
		}
		else {
			continue;
		}
	}

	cout << count;

	return 0;
}