#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double X;
    double P;
    cin >> X >> P;
    double OriginalPrice = P / (1 - (X / 100.00));
    cout << fixed << setprecision(2) << OriginalPrice;
    return 0;
}
