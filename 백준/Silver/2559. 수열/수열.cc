#include <iostream>
#include <algorithm>
using namespace std;
int n,k,tmp,ret = -1000000;
int psum[100001]; //0으로 초기화 되는 구나^.^
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> tmp;
		psum[i] = psum[i - 1] + tmp;
	}
	for (int i = k; i <= n; i++) {
		ret = max(ret, psum[i] - psum[i - k]);
	}
	cout << ret;
}