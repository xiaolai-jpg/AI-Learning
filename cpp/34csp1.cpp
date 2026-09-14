#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,p,q;
    cin >> n >> m >> p >> q;
    vector<int>M(n*m);
    for(int i =0;i<n*m;i++)
    {
        cin >> M[i];
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout << M[i*q+j] <<' ';
        }
        cout << '\n';
    }
    return 0;
}