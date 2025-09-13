#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<long> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	long X;
	cin >> X;
	for (int i = 0; i < N; i++) {
		if (arr[i] == X) {
			cout << i;
			return 0; // Exit after finding the first occurrence
		}
	}
	cout << -1;
	return 0;
}