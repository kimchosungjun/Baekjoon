#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>

typedef long long int ll;
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;	

int parent[100001];
set<int>s;

int Find(int parameter) {
	if (parameter == parent[parameter])
		return parameter;
	else
		return parent[parameter] = Find(parent[parameter]);
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b)
		parent[b] = a;
}


int main(){
	setting;
	int g,p;
	cin >> g; // 게이트 수
	cin >> p; // 비행기 수
	int cnt = 0;

	for (int i = 1; i <= g; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < p; i++) {
		int p;
		cin >> p;
		int ans=Find(p);
		if(ans!=0){
			Union(ans - 1, ans);
			cnt++;
		}
		else {
			break;
		}
	}
	cout << cnt;
	return 0;
}