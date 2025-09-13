#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool first = true;
    for (int i = 0; i < N; i++) {
        if (A[i] < 10) {
            if (!first) {
                cout << endl;
            }
            cout << "A[" << i << "] = " << A[i];
            first = false;
        }
    }
    return 0;
}