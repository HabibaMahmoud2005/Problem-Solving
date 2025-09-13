#include <iostream>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int* arr = new int[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        int smallest = INT_MAX;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (arr[i] + arr[j] + j - i < smallest) {
                    smallest = arr[i] + arr[j] + j - i;
                }
            }
        }
        cout << smallest << endl;
        delete[] arr;
    }
    return 0;
}
