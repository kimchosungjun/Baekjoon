#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a;
	cin >> b;

	int sum1,sum2,sum3,sum4;
	sum1 = a * (b % 10);
	sum2 = a * ((b / 10) % 10);
	sum3 = a * (b / 100);
	sum4 = a * b;
	cout << sum1 << '\n' << sum2 << '\n' << sum3 << '\n' << sum4;
}