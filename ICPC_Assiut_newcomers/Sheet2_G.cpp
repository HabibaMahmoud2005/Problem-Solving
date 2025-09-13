#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--) {
        long long factorial = 1;
        cin >> X;
        for (int i = 2; i <= X; i++)
            factorial *= i;
        cout << factorial << endl;
    }
    return 0;
}
