#include <iostream>
#define setting ios::sync_with_stdio(NULL),cin.tie(NULL),cout.tie(NULL)
using namespace std;

int main()
{
	setting;
	int arr[6];
	int cnt[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 6; i++) {
		cout << cnt[i] - arr[i] << ' ';
	}
	return 0;
}
