#include<iostream>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define llt long long int
// 백준 14502 완전탐색 + BFS
using namespace std;

int n;
vector<int>nVec;
vector<string>operatorVec;
bool visited[11] = { false, };
bool firstVisited = true;
llt maxi = 0;
llt mini = 0;

void BackTracking(int loc, int curNum, int idx) {
	if (loc == n - 1) {
		if (firstVisited) {
			maxi = curNum;
			mini = curNum;
			firstVisited = false;
		}
		else {
			maxi = (maxi < curNum) ? curNum : maxi;
			mini = (mini > curNum) ? curNum : mini;
		}
		return;
	}
	else {
		for (int i = 0; i < n - 1; i++) {
			if (visited[i] == false) {
				visited[i] = true;
				string oper = operatorVec[i];
				llt opNum = 0;
				if (oper == "+") {
					opNum = curNum + nVec[idx];
				}
				else if(oper == "-"){
					opNum = curNum - nVec[idx];
				}
				else if (oper == "*") {
					opNum = curNum * nVec[idx];
				}
				else if (oper == "/") {
					opNum = curNum / nVec[idx];
				}
				
				BackTracking(loc + 1, opNum, idx + 1);
				visited[i] = false;
			}
		}
	}
}

int main() {
	setting;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		nVec.push_back(num);
	}
	for (int i = 0; i < 4; i++) {
		int cnt;
		cin >> cnt;
		if (i == 0) {
			for (int k = 0; k < cnt; k++) {
				operatorVec.push_back("+");
			}
		}
		else if (i == 1) {
			for (int k = 0; k < cnt; k++) {
				operatorVec.push_back("-");
			}
		}
		else if (i == 2) {
			for (int k = 0; k < cnt; k++) {
				operatorVec.push_back("*");
			}
		}
		else if (i == 3) {
			for (int k = 0; k < cnt; k++) {
				operatorVec.push_back("/");
			}
		}
	}
	BackTracking(0, nVec[0], 1);
	cout << maxi << endl<<mini<<endl;
	return 0;
}