#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
#define Max 100001
typedef long long ll;
#define setting ios::sync_with_stdio(NULL), cin.tie(NULL)
using namespace std;

vector<int>v;

int main()
{
    setting;
    int n;
    ll m, num;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    ll left = 0;
    ll right = v[n- 1];

    ll mid = 0;
    ll result = 0;

    ll tree = 0;
    while (left <= right) 
    {
        tree = 0;
        mid = (left + right) / 2;
        for (int i = 0; i < n; i++) {
            if (v[i] - mid > 0)
            {
                tree += v[i] - mid;
            }
        }

        if (m <= tree) 
        {
            left = mid + 1;
            if(mid>result)
                result = mid; 
        }
        else 
        {
            right = mid - 1;
        }
    }

    cout << result;
    return 0;
}