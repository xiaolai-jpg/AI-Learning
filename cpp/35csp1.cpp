#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        bool letter=false;
        bool digit=false;
        bool special=false;
        vector<int>cnt(128,0);
        bool repeat=false;
        for(char c:s)
        {
            if(isalpha(c))
            {
                letter=true;
            }
            else if(isdigit(c))
            {
                digit=true;
            }
            else
            {
                special=true;
            }
            cnt[c]++;
            if(cnt[c]>2)
            {
                repeat=true;
            }
        }
        if(!(letter&&digit&&special))
        {
            cout << 0 << '\n';
        }
        else if(repeat)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 2 << '\n';
        }
    }
    return 0;
}