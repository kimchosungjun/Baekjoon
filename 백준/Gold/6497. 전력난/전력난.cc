#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

#define endl "\n"
#define MAX 200010
using namespace std;

int M, N, Total, Result, Answer;
int Parent[MAX];
bool Inp_Flag;
vector<pair<int, pair<int, int>>> Edge;

void Initialize()
{
    Edge.clear();
    Total = Result = 0;
    for (int i = 0; i < MAX; i++) Parent[i] = i;
}

void Input()
{
    cin >> M >> N;
    if (M == 0 && N == 0)
    {
        Inp_Flag = true;
        return;
    }
    for (int i = 0; i < N; i++)
    {
        int a, b, c; cin >> a >> b >> c;
        Edge.push_back(make_pair(c, make_pair(a, b)));
        Total = Total + c;
    }
}

int Find_Parent(int A)
{
    if (A == Parent[A]) return A;
    else return Parent[A] = Find_Parent(Parent[A]);
}

bool SameParent(int A, int B)
{
    A = Find_Parent(A);
    B = Find_Parent(B);
    if (A == B) return true;
    return false;
}

void Union(int A, int B)
{
    A = Find_Parent(A);
    B = Find_Parent(B);

    Parent[B] = A;
}

void Solution()
{
    sort(Edge.begin(), Edge.end());
    for (int i = 0; i < Edge.size(); i++)
    {
        int Cost = Edge[i].first;
        int Node1 = Edge[i].second.first;
        int Node2 = Edge[i].second.second;

        if (SameParent(Node1, Node2) == false)
        {
            Union(Node1, Node2);
            Result = Result + Cost;
        }
    }
    Answer = Total - Result;
}

void Solve()
{
    while (1)
    {
        Initialize();
        Input();
        if (Inp_Flag == true) return;
        Solution();
        cout << Answer << endl;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("Input.txt", "r", stdin);
    Solve();

    return 0;
}
