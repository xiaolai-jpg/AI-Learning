#include<bits/stdc++.h>
using namespace std;
int f(int x,int k)
{
    return ((x*x+k*k)&7)^k;
}
int g(int x,int k)
{
    int c=x&7;//得到的是x的二进制数的低三位
    int b=(x>>3)&7;//得到x的二进制数的中三位
    int a=x>>6;//得到x的二进制数的高三位
    int aa=b;
    int bb=c^f(b,k);
    int cc=a^f(c,k);
    return cc|bb<<3|aa<<6;
}
int ans[1<<9],n,m,k[1005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        cin >> k[i];
    }
    for(int i=0;i<(1<<9);i++)
    {
        int x=i;
        for(int j=1;j<=m;j++)
            x=g(x,k[j]);
        ans[x]=i;
    }
    for(int i=0,a;i<n;i++)
    {
        cin >> a;
        cout << ans[a] <<"\n";
    }
    return 0;
}
