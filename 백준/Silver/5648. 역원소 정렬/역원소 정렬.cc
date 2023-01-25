#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main(int argc, char* argv[]) {
	ll n,num;
	string str;
	vector<ll>v;
	vector<string>s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		s.push_back(to_string(num));
		reverse(s[i].begin(), s[i].end());
	}
	for (int i = 0; i < n; i++) {
		num = stoll(s[i]);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i] << endl;
	}
}