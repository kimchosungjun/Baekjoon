#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int visited[1001] = { 0, };
	int	n, k,result,count=0;
	int min = 2;
	cin >> n >> k;
	while (count < k) {
		for (int i = 2; i <= n; i++) {
			if (i % min == 0 && visited[i] == 0) {
				visited[i] = 1;
				count++;
				if (count == k) {
					result = i;
					break;
				}
			}
		}
		for (int i = min; i <= n; i++) {
			if (visited[i] == 0) {
				min = i;
				break;
			}
		}
	}
	cout << result;
}