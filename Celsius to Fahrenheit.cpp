#include<iostream>
using namespace std;
int main()
{
    double cels,farn;

    cout<<"Enter Celsius value:";
    cin>>cels;

    farn=(1.8*cels)+32;
    cout<<"Fahrenheit value is:"<<farn;
    return 0;
}
