#include <iostream>
#include <iomanip> // For setw and setfill
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long result = 1;
    result = (result * A) % 100;
    result = (result * B) % 100;
    result = (result * C) % 100;
    result = (result * D) % 100;

    // Always print 2 digits, pad with 0 if needed
    cout << setw(2) << setfill('0') << result << endl;
    return 0;
}
// constrains make overflow happens , use log instead and This works because the logarithm function is monotonically increasing — it preserves inequality.

