#define _CRT_SECURE_NO_WARNINGS 
#include <string>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}


int main(void) {
	int a, b,temp,lcm;
	scanf("%d %d", &a, &b);
	if (b > a) {
		temp = b;
		b = a;
		a = temp;
	}
	lcm = (a * b) / gcd(a, b);

	printf("%d\n", gcd(a, b));
	printf("%d", lcm);

	return 0;
}
