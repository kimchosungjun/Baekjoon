#define _CRT_SECURE_NO_WARNINGS 
#include <string>
#include <iostream>
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
	long long int n, m;
	scanf("%lld:%lld", &n, &m);
	int gcd_num = gcd(n, m);
	printf("%lld:%lld", n / gcd_num, m / gcd_num);
	return 0;
	
}