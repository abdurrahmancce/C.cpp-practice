//C.Even, Odd, Positive and Negative

#include<iostream>
using namespace std;
int main()
{
    long long a,b,o=0,e=0,p=0,n=0;
    cin>>a;
    for(int i = 0; i<a; i++)
    {
        cin>>b;
        if(b%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if(b>0)
        {
            p++;
        }
        else if(b<0)
        {
            n++;
        }
    }
    cout<<"Even: "<<e<<endl<<"Odd: "<<o<<endl<<"Positive: "<<p<<endl<<"Negative: "<<n<<endl;
}

//Another Method
/*
#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < N; i++)
    {
        long long x;
        cin >> x;

        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            positive++;
        }
        else if (x < 0)
        {
            negative++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    return 0;
}
*/

