#include<bits/stdc++.h>
using namespace std;
map<char,char> f;
string F(string s,int k)
{
    if(k==1)
    {
        string t="#";
        for(int i=1;i<s.size()-1;i++)
        {
            if(f.find(s[i])!=f.end())
            {
                t+=f[s[i]];
            }
            else
            {
                t+=s[i];
            }
        }
        t+='#';
        return t;
    }
    else
    {
        return F(F(s,k-1),1);
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin,s);
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string s1;
        f[s1[1]]=s1[2];
    }
    int m;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        int k;
        cin >> k;
        cout << F(s,k) << '\n';
    }
    return 0;
}