#include <iostream>
using namespace std;
long* reverseArray(long* arr, int size)
{
	long*reversed = new long[size];
	for (int i = 0; i < size; i++)
	{
		reversed[i] = arr[size - i - 1];
	}
	return reversed;
}
int main()
{
	int N;
	cin >> N;
	long* arr = new long[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	long* reversedArr = reverseArray(arr, N);
	for (int i = 0; i < N / 2; i++)
	{
		if (reversedArr[i] != arr[i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	delete[]arr;
	delete[]reversedArr;
	return 0;
}