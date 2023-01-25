#define _CRT_SECURE_NO_WARNINGS 
#include <string>
#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b) {
	if (a % b == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}


int main(void) {
	
	long long int a, b,temp,lcm;
	cin >> a;
	cin >> b;
	if (b > a) {
		temp = b;
		b = a;
		a = temp;
	}

	temp = gcd(a, b); 
	lcm = (a * b) / temp;
	cout << lcm;

	return 0;
}
