#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string sk = "SK";
    string ck = "CY";
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << sk;
    }
    else {
        cout << ck;
    }
    
    return 0;
}
