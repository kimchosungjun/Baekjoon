#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
typedef long long int l;
using namespace std;

int main() {
	l count,n;
	l min= 1000001;
	l max = -1000001;
	scanf("%lld", &count);
	for (int i = 0; i < count; i++) {
		scanf("%lld", &n);
		if (n > max) {
			max = n;
		}
		if (n < min) {
			min = n;
		}
	}
	printf("%lld %lld", min, max);
}