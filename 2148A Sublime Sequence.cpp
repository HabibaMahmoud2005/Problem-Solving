#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, n;
        cin >> x >> n;
        int sum = static_cast<int>(ceil(n / 2.0)) * x
            + static_cast<int>(floor(n / 2.0)) * -x;
        cout << sum << endl;
    }
    return 0;
}
