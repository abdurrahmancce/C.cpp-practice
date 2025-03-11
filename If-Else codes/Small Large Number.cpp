#include<iostream>
using namespace std;
int main()
{
    int a,b,c,large,small;
    cout<<"Enter Three Numbers:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        // cout<<a;
        large=a;
    }
    else if(b>a && b>c)
    {
        // cout<<b;
        large=b;
    }
    else
    {
        // cout<<c;
        large=c;
    }
    cout<<"Large Number : "<<large<<endl;

    cout<<"Enter Three Numbers:";
    cin>>a>>b>>c;
    if(a<b && a<c)
    {
        // cout<<a;
        small=a;
    }
    else if(b<a && b<c)
    {
        // cout<<b;
        small=b;
    }
    else
    {
        // cout<<c;
        small=c;
    }
    cout<<"Small Number : "<<small;
}
