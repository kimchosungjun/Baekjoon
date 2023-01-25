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
vector<int>v;
bool check[2000001];
bool visited[21];
int sum = 0;
int ans[21];

void go(int idx, int loc, int k) {
    if (idx == loc) {
        for (int i = 0; i < idx; i++) {
            sum += ans[i];
        }
        if (!check[sum]) {
            check[sum] = true;
            sum = 0;
            return;
        }
        else {
            sum = 0;
            return;
        }
    }
    else {
        for (int i = k; i < v.size(); i++) {
            if (!visited[i]) {
                ans[idx] = v[i];
                visited[i] = true;
                go(idx + 1, loc, i+1);
                ans[idx] = 0;
                visited[i] = false;
            }
        }
    }
}

int main() {
    setting;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
   
    for (int i = 1; i <= n; i++) {
        go(0, i, 0);
    }

    for (int i = 1; i < 2000001; i++) {
        if (!check[i]) {
            cout << i;
            break;
        }
    }
    return 0;
}