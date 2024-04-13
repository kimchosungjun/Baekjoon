#include<iostream>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define llt long long int
// 백준 14502 완전탐색 + BFS
// 백준 1018
using namespace std;

int n, m;
string s;

int cnt = 0;

void check(int idx, int loc) {
	if (n * 2 + 1 == loc)
	{
		cnt += 1;
		return;
	}
	else {
		if (loc % 2 == 1) { //홀수 o
			if (s[loc + idx] == 'O') {
				check(idx, loc + 1);
			}
			else {
				return;
			}
		}
		else {
			if (s[loc + idx] == 'I') {
				check(idx, loc + 1);
			}
			else {
				return;
			}
		}
	}
}

int main() {
	setting;
	cin >> n >> m >> s;
	for (int i = 0; i < m; i++) {
		if (s[i] == 'I') {
			check(i, 1);
		}
	}
	cout << cnt;
	return 0;
}