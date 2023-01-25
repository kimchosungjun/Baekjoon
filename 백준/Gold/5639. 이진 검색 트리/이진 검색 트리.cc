#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include <queue>
#include<cstring>
#include <cstdio>
#include<cmath>
using namespace std;

int arr[10001];

void post(int st,int end) {
    if (st >= end)
        return;
    if (st == end - 1) {
        cout << arr[st] << '\n';
        return;
    }
    int tmp = st + 1;
    while (tmp < end) {
        if (arr[st] < arr[tmp])
            break;
        tmp++;
    }
    post(st + 1, tmp);
    post(tmp, end);
    cout << arr[st] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int w;
    int idx=0;
    while (cin >> w) {
        if (w <= 0)
            break;
        arr[idx] = w;
        idx++;
    }
    post(0, idx);
    return 0;
}