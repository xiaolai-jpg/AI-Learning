#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>a1(n),a2(n);
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        int pos=s.find('.');
        int a=stoi(s.substr(0,pos));
        int b=s[pos+1]-'0';
        if(b>=0 && b<=4)
        {
            a1[i]=a;
            a2[i]=a;
        }
        else if(b>=6 && b<=9)
        {
            a1[i]=a+1;
            a2[i]=a+1;
        }
        else
        {
            a1[i]=a+1;
            if(a&1)
            {
                a2[i]=a+1;
            }
            else
            {
                a2[i]=a;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << a1[i] <<' ';
    }
    cout << '\n';
    for(int i=0;i<n;i++)
    {
        cout << a2[i] <<' ';
    }
    return 0;
}