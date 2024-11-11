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

int dp[100001] = { 0, };
vector<string> str;
deque<string>q;

void MinStr() {
    int k = str.size(); 
    q.push_front(str[0]);

    for (int i = 1; i < k; i++) {
        if (q.front() < str[i])
            q.push_back(str[i]);
        else
            q.push_front(str[i]);
    }

    for (int j = 0; j < k; j++)
    {
        cout << q[j];
    }
    cout << "\n";
    str.clear();
    q.clear();
}

int main() {
    setting;
    int n, m;
    cin >> n;
    
    string alphabet;

    for (int i = 0; i < n; i++) {
        cin >> m;
        for (int k = 0; k < m; k++) {
            cin >> alphabet;
            str.push_back(alphabet);
        }
        MinStr();
    }

    return 0;
}