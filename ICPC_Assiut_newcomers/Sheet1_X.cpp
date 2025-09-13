#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    long L = max(l1, l2);
    long R = min(r1, r2);
    if (L <= R) cout << L << " " << R;
    else cout << -1;
    return 0;
}
