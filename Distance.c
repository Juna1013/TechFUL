#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N < 0) {
        cout << (-1) * N;
    } else {
        cout << N;
    }
}
