//W.Mathematical Expression

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,result;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    if(s=='+')
    {
        result=a+b;
    }
    else if(s=='-')
    {
        result=a-b;
    }else if(s=='*')
    {
        result=a*b;
    }
    if(result==c)
    {
        cout<<"Yes";
    }else
    {
        cout<<result;
    }
}
