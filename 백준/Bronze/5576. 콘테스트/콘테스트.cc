#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, char* argv[]) {

	vector<int>w;
	vector<int>k;
	int w_data, k_data;
	int w_sum=0, k_sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &w_data);
		w.push_back(w_data);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &k_data);
		k.push_back(k_data);
	}
	sort(w.begin(), w.end());
	sort(k.begin(), k.end());
	for (int i = 9; i > 6; i--) {
		w_sum += w[i];
		k_sum += k[i];
	}
	printf("%d %d", w_sum, k_sum);
	return 0;
}