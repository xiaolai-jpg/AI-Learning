#include<bits/stdc++.h>
using namespace std;
bool check1(const set<int>& S,const set<int>& T)
{
    return S==T;
}
bool check2(const vector<int>& vec,const set<int>& S,const set<int>& T)
{
   
    int xorS=0,xorT=0;
    for(int idx:S )
    {
        xorS^=vec[idx];
    }
    for(int idx:T)
    {
        xorT^=vec[idx];
    }
    return xorS==xorT;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    vector<set<int>>S(m);
    for(int i=0;i<m;i++)
    {
        int len;
        cin >> len;
        for(int j=0;j<len;j++)
        {
            int x;
            cin >> x;
            S[i].insert(x);
        }
    }
    vector<set<int>>T(m);
    for(int i=0;i<m;i++)
    {
        int len;
        cin >> len;
        for(int j=0;j<len;j++)
        {
            int x;
            cin >> x;
            T[i].insert(x);
        }
    }
    for(int i=0;i<m;i++)
    {
        if(check1(S[i],T[i])==check2(a,S[i],T[i]))
        {
            cout << "correct\n";
        }
        else
        {
            cout << "wrong\n";
        }
    }
    return 0;
}