#include <iostream>
#include <string>
using namespace std;

int main()
{
    int X;
    cin >> X;
    string Y = to_string(X);
    if (Y[0] % 2 == 0) cout << "EVEN";
    else cout << "ODD";
    return 0;
}
