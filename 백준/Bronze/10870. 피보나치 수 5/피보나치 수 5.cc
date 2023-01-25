#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int llt;
#define setting ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int fib(int n) {
	if (n==0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}


int main(int argc, const char* argv[]) {
	setting;
	int n;
	cin >> n;
	if (n == 0) {
		cout << 0;
	}
	else if (n == 1) {
		cout << 1;
	}
	else {
		cout << fib(n);
	}
	return 0;
}