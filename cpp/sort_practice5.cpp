#include<bits/stdc++.h>
using namespace std ;
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
    sort(stu.begin(),stu.end(),[](const Student& x,const Student& y){
        if(x.score!=y.score){
            return x.score>y.score;
        }
        else{
            return x.id<y.id;
        }
    });
    int rank=0;
    for(int i=0;i<n;i++)
    {   if(i==0||stu[i].score!=stu[i-1].score)
        {
            rank=i+1;
        }
        cout << stu[i].id << ' ' << stu[i].score <<' ' << rank << endl;

    }
    return 0;
}