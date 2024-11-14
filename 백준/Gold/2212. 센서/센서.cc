#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<tuple>
#include<set>
#include <deque>
#include<cmath>
#include <cstring> // memset 사용
#define Max 100001
typedef long long int  llt;
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int n, k;
vector<int>sensors;
vector<int>delta;

int main() {
    setting;
    cin >> n;
    cin >> k;

    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        sensors.push_back(num);
    }

    if (n == k)
    {
        cout << 0;
        return 0;
    }

    sort(sensors.begin(), sensors.end());

    int res = 0;
    for (int i = 1; i < n; i++) {
        delta.push_back(sensors[i] - sensors[i - 1]);
    }

    sort(delta.begin(), delta.end());

    for (int i = 0; i < (n-1)-(k-1); i++) {
        res += delta[i];
    }

    cout << res;
    return 0;
}