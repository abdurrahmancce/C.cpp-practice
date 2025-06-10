// S. Sum of Consecutive Odd Numbers


#include<iostream>
using namespace std;
int main()
{
    long long t;
    std::cin>>t;
    while(t--)
    {
        long long a,b;
        std::cin>>a>>b;
        long long x=std::min(a,b);
        x++;
        long long y=std::max(a,b);
        long long sum=0;
        for(long long i=x; i<y; i++)
        {
            if(i%2==1)
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}
