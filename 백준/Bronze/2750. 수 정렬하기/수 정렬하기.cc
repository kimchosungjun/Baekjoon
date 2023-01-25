#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, char*argv[]) {
	int count;
	scanf("%d", &count);
	int N;
	vector<int>v;
	for (int i = 0; i < count; i++) {
		scanf("%d", &N);
		v.push_back(N);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < count; i++) {
		cout << v[i] << endl;
	}
}