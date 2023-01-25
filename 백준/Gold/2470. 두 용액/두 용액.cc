#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
long long arr[100001];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
		cin >> arr[i];
	sort(arr, arr + num);
	int l = 0, r = num - 1;
	long long val, al = arr[l], ar = arr[r], result = al + ar;
	while (l < r) {
		val = arr[l] + arr[r];
		if (abs(result) > abs(val)) {
			result = val;
			al = arr[l];
			ar = arr[r];
		}
		if (val <= 0) {
			l++;
		}
		else {
			r--;
		}
	}
	cout << al << " " << ar;
	return 0;
}