//G. Conversion

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    getline(cin, S);

    for (char &ch : S)
    {
        if (ch == ',')
        {
            ch = ' ';
        }
        else if (islower(ch))
        {
            ch = toupper(ch);
        }
        else if (isupper(ch))
        {
            ch = tolower(ch);
        }
    }

    cout << S << endl;

    return 0;
}

