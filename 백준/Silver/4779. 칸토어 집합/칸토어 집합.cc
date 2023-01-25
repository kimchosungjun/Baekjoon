#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include<cmath>
using namespace std;

void print(int l) {
	if (l == 1) {
		cout << '-';
		return;
	}
	else {
		print(l / 3); // print 9 -> print 3 뛰고 print 3-> print 1 뛰고 print 1
		for (int i = 0; i < l / 3; i++) {
			cout << ' ';
		}
		print(l / 3); 
	}
}

int main(int argc, char* argv[]) {
	int n;
	while (cin >> n) {
		print(pow(3, n));
		cout << endl;
	}
    return 0;
}
