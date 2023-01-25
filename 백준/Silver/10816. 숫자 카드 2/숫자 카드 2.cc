#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	// 내가 생각한 풀이방법 : 이분탐색으로 mid값만 이용해서 구하는 방법
	// 다른 사람의 풀이방법 : 이분탐색을 변형한, LowerBound와 UpperBound로 푸는 방법 
	// 찾고자 하는 값보다 큰 값의 개수 : UpperBound , 반대는  LowerBound. 이 2개를 빼면 같은 값의 개수가 나온다.

	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, num;

	cin >> n;
	vector<int>v;

	for (int i = 0; i < n; ++i) {
		cin >> num;
		v.push_back(num);
	}
		

	cin >> m;
	sort(v.begin(), v.end());

	for (int i = 0; i < m; ++i) {
		cin >> num;
		cout << upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num) << " ";
	}

	return 0;
}