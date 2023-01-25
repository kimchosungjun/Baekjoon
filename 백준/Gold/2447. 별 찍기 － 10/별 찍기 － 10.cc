#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

void print_star(int y, int x, int n) {
	if (y / n % 3 == 1 && x / n % 3 == 1) {
		cout << ' ';
		return;
	}
	else if (n / 3 == 0) {
		cout << '*';
		return;
	}
	else {
		print_star(y, x, n / 3);
	}
}

int main(){
	int n; // n= 3^k , 1<=k<8
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			print_star(i, j, n);
		}
		cout << endl;
	}
	return 0;
}
