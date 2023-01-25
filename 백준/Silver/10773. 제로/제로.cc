#include<iostream>
#include<stack>
#define setting ios::sync_with_stdio(NULL), cin.tie(NULL),cout.tie(NULL)
using namespace std;

int main() {

	setting;
	
	int k,num;
	stack<int>st;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> num;
		if (num == 0) {
			st.pop();
		}
		else {
			st.push(num);
		}
	}

	int sum = 0;
	int size = st.size();
	for (int i = 0; i < size; i++) {
		int a = st.top();
		sum += a;
		st.pop();
	}

	cout << sum;

	return 0;
}
