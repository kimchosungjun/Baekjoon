#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<tuple>
#include<set>
#include <deque>
#include<cmath>
#include <cstring> // memset 사용
#define Max 1000000001
typedef long long int  llt;
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int n;
vector<pair<int,int>> v;

int sum,res = 0;
int idx, st, ed;

int main() {
    setting;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> idx >> st >> ed;
        v.push_back({ st,1 });
        v.push_back({ ed,-1 });
    }

    sort(v.begin(),v.end());
    
    for (int i = 0; i < v.size(); i++) {
        sum += v[i].second;
        res = max(sum, res);
    }
    cout << res;
    return 0;
}