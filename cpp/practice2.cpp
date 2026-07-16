//vector的排序
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int len;
//     cin>>len;
//     vector<int> a;//使用push_back()不用提前开辟空间，如果需要下标赋值才需要开辟空间
//     int x;
//     for(int i=0;i<len;i++)
//     {
//         cin>>x;
//         a.push_back(x);
//     }
//     sort(a.begin(),a.end());
//     for(int i:a){
//         cout<<i<<" ";
//     }
//     return 0;
// }
//vector的最大值最小值和平均值
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     vector<int> scores;
//     int x;
//     for(int i=0;i<num;i++)
//     {
//         cin >> x;
//         scores.push_back(x);
//     }
//     int max_score=*max_element(scores.begin(),scores.end());
//     int min_score=*min_element(scores.begin(),scores.end());
//     int sum_score=accumulate(scores.begin(),scores.end(),0);
//     cout << max_score << "\n";
//     cout << min_score << "\n";
//     cout << sum_score/num << "\n";
//     return 0;
// }
//统计奇数和偶数的个数
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    int odd_nums=0;
    int even_nums=0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2==0){
            even_nums++;
        }
        else{
            odd_nums++;
        }
    }
    cout << "odd_nums=" << odd_nums << "\n";
    cout << "even_nums=" << even_nums << "\n";
    return 0;
}