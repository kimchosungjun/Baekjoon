#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
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


int main() {
	//setting;
	int arr[9];
	int dwarf[7];
	int temp;
	int sum = 0;
	int a, b;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				a = i;
				b = j;
				break;
			}
		}
	}
	int idx = 0;
	for (int i = 0; i < 9; i++) {
		if (i != a && i != b) {
			dwarf[idx] = arr[i];
			idx++;
		}
		
	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (dwarf[i] < dwarf[j]) {
				temp = dwarf[i];
				dwarf[i] = dwarf[j];
				dwarf[j] = temp;
			}
		}
	}

	for (int i = 0; i < 7; i++) {

		printf("%d\n", dwarf[i]);
	}
	return 0;
}