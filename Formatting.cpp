#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<showpoint; //Show fraction value after decimal
    cout<<setprecision;
    cout<<setprecision(10); //Show total 10 point value with decimal

    float num1,num2,sum,sub,mul,rem;
    cout<<setw<<"Enter Two Numbers:";

    cin >> num1 >> num2;
    sum= num1 + num2;

    cout<<setw(20)<<"Summation="<<sum<<endl;

    cout<<noshowpoint; //Nothing show any fraction value after decimal
    sub= num1 - num2;
    cout <<setw(20)<<"Subtraction="<<sub<<endl;

    mul= num1 * num2;
    cout <<setw(20)<<"Multification="<<mul<<endl;

    double div= (float) num1 / num2; //For calculate fraction number
    cout <<setw(20)<<"Division="<<div<<endl;

    /* rem= num1 % num2;
     cout <<"Remainder="<<rem<<endl;
     */
    return 0;
}


