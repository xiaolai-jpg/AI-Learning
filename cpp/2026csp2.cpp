#include<bits/stdc++.h>
using namespace std;
long long n;
int k,m;
//这道题用二分的算法 现在要找出一个x，使得宿舍中住x个人够吃m天 小于x一定也可以 但是大于x的不能 即现在要找的x是最大可以入住宿舍的人数 二分的思想就是
//在给定的范围内看中间值可以吗 如果可以就改变左边的值 如果不可以就改变中间的值 
bool check(long long x)
{
    int a=n;
    for(int i=1;i<=m;i++)
    {
        int bad=(a*k+99)/100;
        a=a-bad-x;
    }
    return a>=0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k >> m;
    long long left=0;
    long long right=n;
    while(left<=right)
    {
        long long mid=left+(right-left)/2;
        if(check(mid))
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    cout << right << '\n';
    return 0;
} 