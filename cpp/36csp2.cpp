#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=0;i<=n;i++)
    {
        cin >> a[i];
    }
    vector<int> b(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> b[i];
    }
    vector<int>s(n+1);//从i号区域出发至少需要的初始能量
    s[0]=a[0];
    for(int i=1;i<=n;i++)
    {
        s[i]=s[i-1]-b[i]+a[i];
    }
    vector<int>pre(n+1);
    pre[0]=s[0];
    for(int i=1;i<=n;i++)
    {
        pre[i]=max(pre[i-1],s[i]);
    }
    vector<int>suf(n+1);
    suf[n]=s[n];
    for(int i=n-1;i>=0;i--)
    {
        suf[i]=max(suf[i+1],s[i]);
    }
    for(int i=1;i<=n;i++)
    {
        int ans=max(pre[i-1],suf[i]+b[i]);
        cout << ans << " ";
    }
    return 0;
}