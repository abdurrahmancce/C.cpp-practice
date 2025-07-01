#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int ones = 0;
        int temp = N;
        while (temp > 0)
        {
            if (temp % 2 == 1) ones++;
            temp /= 2;
        }

        int result = 0;
        for (int i = 0; i < ones; i++)
        {
            result = (result << 1) | 1;
        }

        cout << result << endl;
    }

    return 0;
}

