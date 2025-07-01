//E. Hady Rides the Train

#include<iostream>
#define sky long long
using namespace std;
int main()
{
    sky id;
    cin>>id;
    sky row=id/4;
    sky col;
    int row_count[4]={0,1,2,3};
    int col_count[4]={3,2,1,0};

    if(row %2==0)
    {
        col=row_count[id%4];
    }
    else
    {
        col=col_count[id%4];
    }
    cout<<row<<" "<<col<<endl;
}
