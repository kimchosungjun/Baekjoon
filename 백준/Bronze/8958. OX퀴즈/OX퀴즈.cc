#include <iostream>
#include<string>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


int Check(string s) {
	int sum = 0;
	int acc=0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'O') {
			acc++;
		}
		else {
			acc = 0;
		}
		sum += acc;
	}

	return sum;
}

int main() {
	setting;
	int t,count;
	string str;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> str;
		count = Check(str);
		cout << count<<'\n';
	}
	return 0;
}

