#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<int>b(n);
    b=a;
    sort(b.begin(),b.end());
    cout << "asc:";
    for(int i=0;i<b.size();i++)
    {
        cout << b[i] <<' ';
    }
    cout <<endl;
    sort(b.begin(),b.end(),greater<int>());
    cout << "desc:";
    for(int i=0;i<b.size();i++)
    {
        cout << b[i] <<' ';
    }
    cout <<endl;
    sort(b.begin(),b.end(),[](int x,int y){
        return abs(x)<abs(y);
    });
    cout << "self:";
    for(int i=0;i<b.size();i++)
    {
        cout << b[i] <<' ';
    }
    cout <<endl;
    return 0;
}