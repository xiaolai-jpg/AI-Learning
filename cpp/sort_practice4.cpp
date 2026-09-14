#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int money;
    cin >> n >> money;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int i;
    for(i=0;i<n;i++)
    {
        if(money>=a[i]){
            money-=a[i];
        }
        else{
            break;
        }
    }
    cout <<"purchase quantity:" << i << endl;
    cout << "The remaining money:" << money << endl; 
    return 0;
}