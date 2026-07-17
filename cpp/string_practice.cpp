#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//字符串反转
// int main()
// {
//     string s="helloworld";
//     reverse(s.begin(),s.end());
//     cout << s;
//     return 0;
// }
//判断回文串
// int main()
// {
//     string s;
//     cin >> s;
//     int i=0, j=s.length()-1;
//     int mask=1;
//     while(i<j)
//     {
//         if (s[i]!=s[j])
//         {
//             mask=0;
//             break;
//         }
//         i++,j--;
//     }
//     cout << (mask ? "yes" : "no");
//     return 0;
// }
//统计元音字母
// int main()
// {
//     string s;
//     cin >> s;
//     int count=0;
//     for(char c : s)
//     {
//         if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
//         {
//             count++;
//         }
//     }
//     cout << count;
//     return 0;
// }
//查找子串
// int main()
// {
//     string s="helloworld";
//     string t;
//     cin >> t;
//     size_t pos = s.find(t);
//     cout << pos;
//     return 0;
// }
//删除指定字符
int main()
{
    string s;
    cin >> s;
    char del;
    cin >> del;
    s.erase(remove(s.begin(),s.end(),del),s.end());
    cout << s;
    return 0;
}
