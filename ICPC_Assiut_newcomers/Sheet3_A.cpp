#include <iostream>
using namespace std;
int main()
{
    int N;
	cin >> N;

    long* arr = new long[N];
	long long sum = 0;
	while (N--) {
		cin >> arr[N];
		sum += arr[N];
	}
	cout << abs(sum) << endl;
    return 0;
}