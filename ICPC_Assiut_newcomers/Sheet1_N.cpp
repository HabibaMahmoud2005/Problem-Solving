#include <iostream>
using namespace std;

int main()
{
    char X;
    cin >> X;
    if (islower(X))
        cout << char(toupper(X));
    else cout << char(tolower(X));
    return 0;
}
