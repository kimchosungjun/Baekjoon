#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring> // memset 사용
#define Max 300001
typedef long long ll;
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

queue<pair<int, int>>q;
vector<int>v[Max];
bool visited[Max] = { 0, };
vector<int>sortRes;

// k는 최단거리,  p는 시작지점 + 거리
void BFS(pair<int, int> p, int k) {
    q.push(p);
    visited[p.first] = true;
    while (!q.empty()) {
        int startPoint = q.front().first;
        int curCnt = q.front().second;
        q.pop();
        if (k == curCnt)
        {
            sortRes.push_back(startPoint);
            continue;
        }
        else if (k < curCnt)
            continue;


        for (int i = 0; i < v[startPoint].size(); i++) {
            if (visited[v[startPoint][i]])
                continue;

            q.push(make_pair(v[startPoint][i], curCnt + 1));
            visited[v[startPoint][i]] = true;
        }
    }
}

int main() {
    setting;
    int n, m, k, x;
    int st, ed;
    cin >> n>>m>>k>>x;
    for (int i = 0; i < m; i++) {
        cin >> st >> ed;
        v[st].push_back(ed);
    }
    pair<int, int> p;
    p.first = x;
    p.second = 0;
    BFS(p, k);
    if (sortRes.size() == 0)
        cout << "-1";
    else {
        sort(sortRes.begin(), sortRes.end());
        int cnt = sortRes.size();
        for (int i = 0; i < cnt; i++) {
            cout << sortRes[i] << "\n";
        }
    }
    return 0;
}
