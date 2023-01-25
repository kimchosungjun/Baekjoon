#define _CRT_SECURE_NO_WARNINGS 
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char*argv[]) {
	int N, x, y;
	vector<pair<int, int>>v;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {
		printf("%d %d\n",v[i].first, v[i].second);
	}
	
}