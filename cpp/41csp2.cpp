#include<bits/stdc++.h>
using namespace std;
struct Task{
    int oi,ti,ai,bi;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //1、输入
    int n,m;
    cin >> n >> m;
    vector<Task>task(n);
    for(int i=0;i<n;i++)
    {
        cin >> task[i].oi >> task[i].ti >> task[i].ai >> task[i].bi;
    }
    //2、处理灵活型任务
    vector<Task>flexTask;
    for(int i=0;i<n;i++)
    {
        if(task[i].oi==0)
        {
            flexTask.push_back(task[i]);
        }
    }
    sort(flexTask.begin(),flexTask.end(),[](Task x,Task y){
        return 1LL*x.bi*y.ai > 1LL*y.bi*x.ai;
    });
    vector<double>flex(m+1,0);
    for(int j=0;j<=m;j++)
    {
        double remain=j;
        for(auto t:flexTask)
        {
            if(remain<=0)
            {
                break;
            }
            if(remain>=t.ai)
            {
                flex[j]+=t.bi;
                remain-=t.ai;
            }
            else
            {
                flex[j]+=remain*t.bi/t.ai;
                remain=0;
            }
        }
    }
    //3、处理普通型任务建立dp 其中需要注意的点是 1、最多有m杯咖啡 就需要将dp的大小建立成m+1 2、dp的转移公式需要牢记 3、循环需要倒叙 4、dp用来记录的是最多j杯咖啡可以得到的收益
    vector<int>dp(m+1,0);
    for(int i=0;i<n;i++)
    {
        int a=task[i].ai;
        int b=task[i].bi;
        if(task[i].oi)
        {
            for(int j=m;j>=a;j--)//避免出现j-a<0的情况
            {
                dp[j]=max(dp[j],dp[j-a]+b);
            }
    }   
   }
   //4、找到收益最大的一种方式
   double ans=0;
   for(int j=0;j<=m;j++)
   {
    ans=max(ans,dp[j]+flex[m-j]);
   }
   //5、输出最终完成任务所需要的最短时间
   long long t=0;
   for(int i=0;i<n;i++)
   {
        t+=task[i].ti;
   }
    double res=t-ans;
    cout << fixed << setprecision(10) << res;
    return 0;
}