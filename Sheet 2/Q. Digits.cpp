// Q. Digits


#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==0)
    {
        cout<<0<<endl;
    }
    else
    {
        while(n!=0)
        {
            long long vagshes=n%10;
            cout<<vagshes<<" ";
            n=n/10;
        }
        cout<<endl;
    }
}
