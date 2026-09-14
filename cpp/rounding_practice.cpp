#include<bits/stdc++.h>
using namespace std;
int fun1(double x)
{
    int y=round(x*10);
    int dec=y % 10;
    if(dec<5){
        return y/10;
    }
    else{
        return y/10+1;
    }
}
int fun2(double x){
    int y=round(x*10);
    int dec=y % 10;
    if(dec!=5){
        return fun1(x);
    }
    else{
        int n=y/10;
        if(n%2==0){
            return n;
        }
        else{
            return n+1;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<double>nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){
        cout << fun1(nums[i]) << ' ';
    }
    cout<<'\n';
    for(int i=0;i<n;i++){
        cout << fun2(nums[i]) << ' ';
    }
    cout<<'\n';
    return 0;
}