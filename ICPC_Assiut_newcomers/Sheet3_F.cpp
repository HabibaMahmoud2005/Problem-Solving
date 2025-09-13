#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> result(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		result[N - i - 1] = A[i];
	}
	for (auto it = result.begin(); it != result.end(); ++it)
	{
		cout << *it << " ";
	}
	return 0;
}