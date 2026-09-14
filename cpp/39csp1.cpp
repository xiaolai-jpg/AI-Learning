#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
struct P{
    double x,y;
};
bool check(int a,P p)
{
    return p.x*p.x+p.y*p.y<=a*a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a;
    cin >> n >> a;
    vector<P>p(n);
    for(int i=0;i<n;i++)
    {
        cin >> p[i].x >>p[i].y;
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(check(a,p[i]))
        {
            m++;
        }
    }
    double pi=4.0*m/n;
    cout << fixed << setprecision(6) << pi <<'\n';
    return 0;
}