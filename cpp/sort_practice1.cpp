#include <bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int score;
};
int main()
{
    int n;
    cin >> n;
    vector<Student>stu(n);
    for(int i=0;i<n;i++)
    {
        cin >> stu[i].name >> stu[i].score;
    }
    sort(stu.begin(),stu.end(),[](Student x,Student y){
        if(x.score!=y.score){
            return x.score>y.score;
        }
        return x.name<y.name;
    });
    cout << "after sort:";
    for(int i=0;i<n;i++)
    {
        cout << stu[i].name <<':' <<stu[i].score <<endl;
    }
    return 0;
}