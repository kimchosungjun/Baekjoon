#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
const int INF = 1e9 + 7;

string s;
string p;
int cnt = 0;
int siz = 0;
int sidx = 0;
int pidx = 0;
int maxsiz = -1;
int main() {
	cin >> s;
	cin >> p;

	for (int i = 0; i < p.size(); i++) {
		for (int j = 0; j < s.size(); j++) {
			siz = 0;
			if (p[i] == s[j]) {
				pidx = i+1;
				sidx = j+1;
				siz++;
				while (true) {
					if (sidx == s.size())
						break;
					if (p[pidx] == s[sidx]) {
						siz++;
						pidx++;
						sidx++;
					}
					else {
						break;
					}
				}
				maxsiz = max(maxsiz, siz);
			}
		}
		cnt++;
		i += maxsiz-1;
		maxsiz = -1;
	}

	cout << cnt;
	return 0;
}