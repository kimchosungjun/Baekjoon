#include <iostream>
#include <stack>
#include <deque>
#define setting ios::sync_with_stdio(NULL),cin.tie(NULL),cout.tie(NULL)
using namespace std;

int main()
{   
    setting;
    deque<int>deq;
    int n,num;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "push_front") {
            cin >> num;
            deq.push_front(num);
        }
        else if (str == "push_back") {
            cin >> num;
            deq.push_back(num);
        }
        else if (str == "pop_front") {
            if (deq.empty()) {
                cout << -1<<'\n';
            }
            else {
                cout << deq.front()<<'\n';
                deq.pop_front();
            }
        }
        else if (str == "pop_back") {
            if (deq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << deq.back() << '\n';
                deq.pop_back();
            }
        }
        else if (str == "size") {
            cout << deq.size()<<'\n';
        }
        else if (str == "empty") {
            if (deq.empty()) {
                cout << 1<<'\n';
            }
            else {
                cout << 0<<'\n';
            }
        }
        else if (str == "front") {
            if (deq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << deq.front() << '\n';
            }
        }
        else if (str == "back") {
            if (deq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << deq.back() << '\n';
            }
        }
    }
    
    return 0;
}
