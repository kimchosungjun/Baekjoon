#include<iostream>
#include<vector>
#include<algorithm>

#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int fac(int num) {
	if (num == 1)
		return 1;
	else
		return num * (fac(num - 1));
}

int main() {
	setting;
	int num;
	cin >> num;
	if (num == 0)
		cout << 1;
	else
		cout<<fac(num);
	return 0;
}