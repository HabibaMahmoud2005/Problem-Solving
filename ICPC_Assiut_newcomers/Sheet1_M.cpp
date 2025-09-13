#include <iostream>
using namespace std;

int main()
{
    char X;
    cin >> X;
    if (isdigit(X)) cout << "IS DIGIT";
    else if (isalpha(X))
    {
        cout << "ALPHA\n";
        if (isupper(X)) cout << "IS CAPITAL";
        else cout << "IS SMALL";
    }
    return 0;
}
