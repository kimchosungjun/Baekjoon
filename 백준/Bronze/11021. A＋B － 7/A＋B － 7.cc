#include <iostream>
#include<algorithm>
#define setting ios::sync_with_stdio(NULL),cin.tie(NULL),cout.tie(NULL)
using namespace std;

int main()
{   
    setting;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b<<'\n';
    }
    return 0;
}
