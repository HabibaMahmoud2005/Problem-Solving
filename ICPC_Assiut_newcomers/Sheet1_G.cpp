#include <iostream>
using namespace std;

int main()
{ // notice complexity problem if loop is used , instead use this mathmatical formula
    long long N;
    cin >> N;
    long long result = N * (N + 1) / 2;
    cout << result;
    return 0;
}
