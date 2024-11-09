#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<tuple>
#include<set>
#include<cmath>
#include <cstring> // memset 사용
#define Max 100001
typedef long long int  llt;
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int main() {
    setting;
    long long n, ans = 0, a = 0;
    cin >> n;
    while (a < n) {
        if (a == 0)
            a++;
        else
            a *= 2;
        ans++;
    }
    cout << ans;
    return 0;
}