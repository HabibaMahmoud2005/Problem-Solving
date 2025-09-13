#include <iostream>
using namespace std;

int main()
{
    char C;
    cin >> C;
    if (C != 'z') cout << char(int(C) + 1);
    else cout << 'a';
    return 0;
}
