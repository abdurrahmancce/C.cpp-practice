//B.Searching

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,f=0;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<i;
            f=1;
            break;
        }
    }
    if(f==0) cout<<-1;
}
