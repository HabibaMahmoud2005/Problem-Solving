#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cout << N / 365 << " years\n";
    N = N % 365;
    cout << N / 30 << " months\n";
    N = N % 30;
    cout << N << " days";
    return 0;
}
