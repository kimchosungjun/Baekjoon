#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<tuple>
#include<set>
#include <cstring> // memset 사용
#define Max 100001
typedef long long ll;
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int width, height, depth;
int allCnt = 0;
int ripeCnt = 0;
int ripeDay = 0;

int dx[6] = { -1,0,1,0,0,0 };
int dy[6] = { 0,1,0,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };

int tomatoFrame[101][101][101];
bool visited[101][101][101] = { 0, };
vector<tuple<int, int, int>> ripes;
vector<tuple<int, int, int>> nextRipes;

void BFS() {
    queue<tuple<int, int, int, int>> q;
    for (auto& ripe : ripes) {
        int x = get<0>(ripe);
        int y = get<1>(ripe);
        int z = get<2>(ripe);
        q.push(make_tuple(x, y, z, 0));
    }

    while (!q.empty()) {
        int x, y, z, day;
        tie(x, y, z, day) = q.front();
        q.pop();

        ripeDay = max(ripeDay, day);

        for (int i = 0; i < 6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];

            if ((nx >= 0 && nx < width) && (ny >= 0 && ny < height) && (nz >= 0 && nz < depth)
                && tomatoFrame[nx][ny][nz] == 0 && !visited[nx][ny][nz]) {
                visited[nx][ny][nz] = true;
                ripeCnt++;
                q.push(make_tuple(nx, ny, nz, day + 1));
            }
        }
    }
}


int main() {
    setting;
    memset(tomatoFrame, -1, sizeof(tomatoFrame));
    int tomato;
    cin >> width >> height >> depth;
    for (int d = 0; d < depth; d++) {
        for (int h = 0; h < height; h++) {
            for (int w = 0; w < width; w++) {
                cin >> tomato;
                tomatoFrame[w][h][d] = tomato;
                if (tomato != -1) {
                    if (tomato == 1) {
                        ripes.push_back(make_tuple(w, h, d));
                        visited[w][h][d] = true;
                        ripeCnt += 1;
                    }
                    allCnt += 1;
                }
            }
        }
    }

    if (ripeCnt == allCnt)
    {
        cout << 0;
        return 0;
    }

    BFS();

    if (allCnt != ripeCnt)
    {
        cout << -1;
        return 0;
    }
    else {
        cout << ripeDay;
        return 0;
    }
}
