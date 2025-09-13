//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        int* a = new int[n];
//
//        int oddRep = 0;
//        long long total = 0;
//        int minOdd = INT_MAX;
//
//        for (int i = 0; i < n; i++) {
//            cin >> a[i];
//            total += a[i];
//            if (a[i] % 2 != 0) {
//                oddRep++;
//                minOdd = min(minOdd, a[i]);
//            }
//        }
//
//        if (oddRep == 0) {
//            cout << 0 << endl;
//        }
//        else if (oddRep % 2 != 0) { // odd repetition
//            cout << total << endl;
//        }
//        else { // even repetition
//            cout << total - minOdd << endl;
//        }
//
//        delete[] a;
//    }
//    return 0;
//}
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> odd, even;
        for (int i = 0; i < n; i++) {
            long long x; 
            cin >> x;
            if (x % 2 == 0) even.push_back(x);
            else odd.push_back(x);
        }

        if (odd.empty()) {
            cout << 0 << endl;
            continue;
        }

        long long ans = 0;
        for (auto v : even) ans += v;

        sort(odd.rbegin(), odd.rend());
        int largestIndex = (odd.size() + 1) / 2;
        for (int i = 0; i < largestIndex; i++) 
            ans += odd[i];

        cout << ans << "\n";
    }
    return  0;
}
