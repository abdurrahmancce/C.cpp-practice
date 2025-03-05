#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum,sub,mul,rem;
    cout<<"Enter Two Numbers:";

    cin >> num1 >> num2;
    sum= num1 + num2;

    cout <<"Summation="<<sum<<endl;

    sub= num1 - num2;
    cout <<"Subtraction="<<sub<<endl;

    mul= num1 * num2;
    cout <<"Multification="<<mul<<endl;

    double div= (float) num1 / num2; //For calculate fraction number
    cout <<"Division="<<div<<endl;

    rem= num1 % num2;
    cout <<"Remainder="<<rem<<endl;

    return 0;
}

