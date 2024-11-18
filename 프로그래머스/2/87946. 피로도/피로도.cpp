#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int num=0;
int visited[9]={0,}; //방문 : 1 , 방문X : 0

int dfs(int cnt, int k, vector<vector<int>> dungeons)
{   // cnt : 던전 탐험 수 , num : 최대 던전 탐험 수 
    if(cnt > num) num = cnt;
    
    for(int i=0; i<dungeons.size(); i++)
    {
        if(visited[i]==0&&dungeons[i][0] <=k)
        {
            visited[i] =1;
            dfs(cnt+1,k-dungeons[i][1],dungeons);
            visited[i] = 0;
        }
    }
    return 0;
}

int solution(int k, vector<vector<int>> dungeons) {
    //int answer = -1;
    dfs(0,k,dungeons);
    return num;
}