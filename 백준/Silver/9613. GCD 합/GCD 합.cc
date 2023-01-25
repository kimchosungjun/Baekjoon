#define _CRT_SECURE_NO_WARNINGS 
#include <string>
#include <iostream>
#define Max 101
using namespace std;

int gcd(int a, int b) {
	int r;
	if (b > a) {
		r = b % a;
		if (r == 0) {
			return a;
		}
		else {
			return gcd(a, b % a);
		}
	}
	else {
		r = a % b;
		if (r == 0) {
			return b;
		}
		else {
			return gcd(b, a % b);
		}
	}
	
}

int main(void) {
	// 값 입력
	int case_num;
	int count; 
	long long int sum = 0;
	int arr[Max];
	scanf("%d", &case_num);
	for (int i = 0; i < case_num; i++) {
		scanf("%d", &count);
		for (int j = 0; j < count; j++) {
			scanf("%d", &arr[j]);
		}
		for (int k = 0; k < count; k++) {
			for (int n = 0; n < count; n++) {
				if (n < k) {
					sum += gcd(arr[n], arr[k]);
				}
			}
		}
		printf("%lld\n", sum);
		sum = 0;
	}
}