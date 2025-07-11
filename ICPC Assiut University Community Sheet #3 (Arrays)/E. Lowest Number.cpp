//E. Lowest Number

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int minValue = A[0];
    int minIndex = 0;

    for (int i = 1; i < N; ++i) {
        if (A[i] < minValue) {
            minValue = A[i];
            minIndex = i;
        }
    }

    cout << minValue << " " << (minIndex + 1) << endl;

    return 0;
}

