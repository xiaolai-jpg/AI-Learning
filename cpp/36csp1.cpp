#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    for(int i=0;i<k;i++)
    {
        int x,y;
        string s;
        cin >> x >> y;
        cin >> s;
        int sx=x,sy=y;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='f')
            {
                if(1<=sy+1 && sy+1<=n)
                {
                    sy+=1;
                }
                continue;
            }
            if(s[j]=='b')
            {
                if(1<=sy-1 && sy-1<=n)
                {
                    sy-=1;
                }
                continue;
            }
            if(s[j]=='l')
            {
                if(1<=sx-1 && sx-1<=n)
                {
                    sx-=1;
                }
                continue;
            }
            if(s[j]=='r')
            {
                if(1<=sx+1 && sx+1<=n)
                {
                    sx+=1;
                }
                continue;
            }
        }
        cout << sx << ' ' << sy <<'\n';
    }

    return 0;

}