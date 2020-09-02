#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) {
        cin >> s[i];
    }
    int ans = 0;
    for(int si = 0; si < h; si++) {
        for(int sj = 0; sj < w; sj++) {
            if (s[si][sj] == '#') 
            continue;
            vector<vector<int>> dist(h, vector<int>(w, INF));
            queue<pair<int, int>> q;
            dist[si][sj] = 0;
            q.push({si, sj});
            while (!q.empty())  {
                int x = q.front().first, y = q.front().second;
                q.pop();
                // 全方向を試す(dirには四方の値が入ってる)
                for(int k = 0; k < 4; k++) {
                    int ni = x + dir[k][0], nj = y + dir[k][1];
                    if (ni < 0 || ni >= h || nj < 0 || nj >= w ||
                        s[ni][nj] == '#' || dist[ni][nj] != INF) 
                        continue;
                    dist[ni][nj] = dist[x][y] + 1;
                    q.push({ni,nj});
                }
            } 
            for(int i=0;i<h;i++) {
                for(int j=0;j<w;j++) {
                    if (dist[i][j] == INF) continue;
                    ans = max(ans, dist[i][j]);
                }
            }
        }
    }
    cout << ans << endl;
}
