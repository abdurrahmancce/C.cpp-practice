//G. Factorial

#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    cin>>a;
    for(int i=0; i<a; i++ )
    {
        cin>>b;
        long long c=1;
        for(int j =1; j<=b; j++)
        {
            c*=j;
        }
        cout<<c<<endl;
    }
}
