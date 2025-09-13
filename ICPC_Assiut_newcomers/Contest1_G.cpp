#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, m, k;
    long long count = 0;
    long long t = 0, x = 0, z = 0;
    cin >> n >> m >> k;
    // least amount of resources
// One eye, one mouth, and one body
    x = min(n, min(m, k));
    n -= x;
    m -= x;
    k -= x;
    count += x;
    // if resources exist , and least amount

    if (n > 0 && m > 0 && k > 0)
    {
        // Two eyes, one mouth, and one body
        t = min(n / 2, min(m, k));
        n -= t * 2;
        m -= t;
        k -= t;
        count += t;
    }
    if (n > 0 && k > 0)
    {
        // Two eyes and one body
        z = min(n / 2, k);
        count += z;
    }

    cout << count;

    return 0;
}
