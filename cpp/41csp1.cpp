#include<bits/stdc++.h>
using namespace std;
bool balance(int a)
{
    int c=a;
    int one=0,zero=0;
    while(c!=0)
    {
        if(c&1)
        {
            one++;
        }
        else
        {
            zero++;
        }
        c>>=1;
    }
    return one==zero;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(balance(a[i]))
        {
            x++;
        }
    }
    cout << x;
    return 0;
}