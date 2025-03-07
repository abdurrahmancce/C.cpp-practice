#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter Three Numbers:";
    cin>>num1>>num2>>num3;
    if(num1>num2)
    {
        cout<<"Large Number is:"<<num1;
    }

    else if(num2>num3)
    {
       cout<<"Large Number is:"<<num2;
    }

    else
    {
        cout<<"Large Number is:"<<num3;
    }
    return 0;
}

