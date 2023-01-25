#define _CRT_SECURE_NO_WARNINGS 
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char*argv[]) {
	int n, m;
	int num;
	vector<int>v;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n;i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n + m; i++) {
		printf("%d ", v[i]);
	}
}