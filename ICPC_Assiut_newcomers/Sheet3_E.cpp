#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
	int* A = new int[N];
	int lowestNumber = INT_MAX;
	int lowestIndex = -1;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		if (A[i] < lowestNumber) {
			lowestNumber = A[i];
			lowestIndex = i;
		}
	}
	cout << lowestNumber << " " << lowestIndex + 1 << endl;
    return 0;
}