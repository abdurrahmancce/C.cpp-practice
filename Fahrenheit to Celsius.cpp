#include<iostream>
using namespace std;
int main()
{
    double cels,farn;

    cout<<"Enter Fahrenheit value:";
    cin>>farn;

    cels=(farn-32)/1.8;
    cout<<"Celsius value is:"<<cels<<"`C";
    return 0;
}

