#include <iostream>
using namespace std;
int main()
{
    // cout<<"Hello CSP!"<<endl;
    // int age;
    // cout<<"Please input Age:"<<endl;
    // cin>>age;
    // cout<<"Age:"<<age<<endl;
    int a=10;
    // double b=3.14;
    char c='A';
    string s="Hello";
    int b=3;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;
    int score;
    cin>>score;
    if(score>=60){
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}