#include<iostream>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define llt long long int
// 백준 14502 완전탐색 + BFS
// 백준 1018
using namespace std;

string board[51][51]; //n.m
int mini = 33;
int idx = 0;
int cnt = 0;
bool isWhite = false;
void DivStr(string boardStr,int n,int m) {
	for (int i = 0; i < m; i++) {
		board[n][i] = boardStr[i];
	}
}

void CalMin(int y,int x) {
	cnt = 0;
	for (int q = y; q < y + 8; q++) {
		if (q % 2 == 0)
			isWhite = true;
		else
			isWhite = false;
		for (int p = x; p < x + 8; p++) {
			if (isWhite) {
				if (board[q][p] == "B")
					cnt += 1;
			}
			else {
				if (board[q][p] == "W")
					cnt += 1;
			}
			isWhite = !isWhite;
		}
	}
	mini = (mini > cnt) ? cnt : mini;
	cnt = 0;
	for (int q = y; q < y + 8; q++) {
		if (q % 2 == 0)
			isWhite = false;
		else
			isWhite = true;
		for (int p = x; p < x + 8; p++) {
			if (isWhite) {
				if (board[q][p] == "B")
					cnt += 1;
			}
			else {
				if (board[q][p] == "W")
					cnt += 1;
			}
			isWhite = !isWhite;
		}
	}
	mini = (mini > cnt) ? cnt : mini;
}

int main() {
	setting;
	int n, m;
	cin >> n >> m;
	string boardStr;
	for (int i = 0; i < n; i++) {
		cin >> boardStr;
		DivStr(boardStr,i,m);
	}
	for (int i = 0; i < n-7; i++) {
		for (int k = 0; k < m-7; k++) {
			CalMin(i, k);
		}
	}
	cout << mini;
	return 0;
}