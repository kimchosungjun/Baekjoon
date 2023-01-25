#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
#define setting ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(int argc, const char* argv[]) {
	setting;
	string hour, min;
	int t;
	double angle;
	cin >> t;
	while (t--) {
		vector<pair<double, string>>v;
		for (int i = 0; i < 5; i++) {
			//시간 입력 -> 02:00, 03:00 ... 등
			string time;
			cin >> time;
			double h = (time[0] - '0') * 10 + time[1] - '0';
			double m = (time[3] - '0') * 10 + time[4] - '0';

			// 시간과 분을 각도로 변환
			h = h * 30+0.5*m;
			m= m * 6;
			angle = abs(h - m);
			while (angle >= 360) {
				angle = angle - 360;
			}
			if (angle > 180) {
				angle = 360 - angle;
			}
			v.push_back({angle,time});
		}
		sort(v.begin(), v.end());
		cout << v[2].second.c_str() << '\n';
		v.clear();
	}
	return 0;
}