#include <iostream>
#include <queue>
using namespace std ;
bool check[300001] ;
int check_box, answer ;
string str ;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0) ;
    cin >> str ;
    queue<int> que ;

    for(int i = 0 ; i < str.length() ; i++)
    {
        if(str[i] == 'B') que.push(i) ;
        else if(str[i] == 'C' && !que.empty())
        {
            check[que.front()] = 1 ;
            que.pop() ;
            answer++ ;
        }
    }

    que = queue<int>() ; check_box = 0 ;
    for(int i = 0 ; i < str.length() ; i++)
    {
        if(str[i] == 'A') check_box++ ;
        else if(str[i] == 'B' && check_box && !check[i])
        {
            check[i] = 1 ;
            check_box-- ;
            answer ++ ;
        }
    }

    cout << answer ;
}