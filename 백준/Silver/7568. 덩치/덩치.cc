#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
const int INF = 1e9 + 7;

int n;
int x, y;
vector<pair<int, int>>v;
int score[51];
int main() {
    setting;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({ x,y });
    }
    int idx = 0;
    int cnt = 0;
    while (idx < n) {
        cnt = 0;
        for (int i = 0; i < v.size(); i++) {
            if (idx == i)
                continue;
            if (v[i].first > v[idx].first && v[i].second > v[idx].second)
                cnt++;
        }
        score[idx] = cnt + 1;
        idx++;
    }
    

    for (int i = 0; i < n; i++) {
        cout << score[i] << ' ';
    }
    
    
    
    return 0;
}