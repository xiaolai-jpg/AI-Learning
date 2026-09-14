#include <bits/stdc++.h>
using namespace std;
struct Student{
    int id;
    int score;
};
int main()
{
    int n;
    cin >> n;
    vector<Student>stu(n);
    for(int i=0;i<n;i++)
    {
        cin >> stu[i].id >> stu[i].score;
    }
    sort(stu.begin(),stu.end(),[](Student x,Student y){
        if(x.score!=y.score){
            return x.score>y.score;
        }
        return x.id < y.id;
    });
    for(int i=0;i<n;i++){
        cout << stu[i].id << ' ' << stu[i].score << endl; 
    }
    return 0;
}