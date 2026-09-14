#include<bits/stdc++.h>
using namespace std;
int b,c,l,r;
long long f(int x)
{
    return x*x+b*x+c;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> b >> c >> l >> r;
    long long s=0;
    for(int i=l;i<=r;i++)
    {
        if(i%2==0)
        {
            s+=f(i);
        }
    }
   cout << 2*s << '\n';
    return 0;
}