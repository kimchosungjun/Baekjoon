#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;

int n, m;
int check[10] = { 0, };
int arr[10];

void permutation(int location) {
	if (location == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (check[i] == 0) {
			//check[i] = 1;
			arr[location] = i;
			permutation(location + 1);
			arr[location] = 0;
			//check[i] = 0;
		}
	}
	return;
}

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	permutation(0);
}