#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        long x, y;
        cin >> n >> m;
        cin >> x >> y;

        int* a = new int[n];
        int* b = new int[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];

        cout << n + m << endl;
        delete[] a;
        delete[] b;
    }

    return 0;
}
