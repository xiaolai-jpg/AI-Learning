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
    sort(a.begin(),a.end());//升序排序
    int maxValue=*max_element(a.begin(),a.end());
    int minValue=*min_element(a.begin(),a.end());
    cout << "max element is:" <<maxValue << endl;
    cout << "min element is:" <<minValue <<endl;
    int a_sum=accumulate(a.begin(),a.end(),0);
    cout << "sum is:" << a_sum << endl;
    return 0;
}