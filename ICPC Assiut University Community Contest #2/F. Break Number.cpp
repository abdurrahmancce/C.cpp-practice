//F. Break Number


#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll test;
    cin>>test;
    ll divisible=0;
    while(test--)
    {
        ll number;
        cin>>number;
        ll count=0;
        while(number %2 ==0)
        {
            number /=2;
            count++;
        }
        if(count>divisible)
            divisible=count;
    }
    cout<<divisible<<endl;
    return 0;
}

