//C. Next Alphabet

#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c == 'z')
    {
        cout << 'a' << endl;
    }
    else
    {
        cout << char(c + 1) << endl;
    }
    return 0;
}

//Another Method
/*
#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    int b = a;
    if(b>=97 && b<122)
    {
        a++;
        cout<<a;
    }
    else if(b==122)
    {
        cout<<'a';
    }
}
*/
