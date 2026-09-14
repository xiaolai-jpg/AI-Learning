#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,k;
int sx,sy;
int dist[N][N];
int dx[8]={2,2,1,1,-2,-2,-1,-1};
int dy[8]={1,-1,2,-2,1,-1,2,-2};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    cin >> sx >> sy;
    memset(dist,-1,sizeof(dist));
    queue<pair<int,int>> q;
    dist[sx][sy]=0;
    q.push({sx,sy});
    int ans=1;
    while(!q.empty())
    {
        auto [x,y]=q.front();
        q.pop();
        if(dist[x][y]==k)
        {
            continue;
        }
        for(int i=0;i<8;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<1||nx>n||ny<1||ny>n)
            {
                continue;
            }
            if(dist[nx][ny]!=-1)
            {
                continue;
            }
            dist[nx][ny]=dist[x][y]+1;
            q.push({nx,ny});
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}