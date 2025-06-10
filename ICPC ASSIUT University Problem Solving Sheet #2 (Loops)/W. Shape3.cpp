//W. Shape3

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(int row=1; row<=n; row++)
    {
        for(int space=1; space<=n-row; space++)
        {
            cout<<" ";
        }
        for(int space=1; space<=(row*2)-1; space++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n; row>=1; row--)
    {
        for(int space=1; space<=n-row; space++)
        {
            cout<<" ";
        }
        for(int space=1; space<=(2*row)-1; space++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}

