//V.Comparison

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num1,num2;
    char s;
    cin>>num1>>s>>num2;
    if((s=='>' && num1>num2) || (s=='<' && num1<num2) ||(s=='=' && num1==num2))
    {
        cout<<"Right";
    }
    else
    {
        cout<<"Wrong";
    }
}
