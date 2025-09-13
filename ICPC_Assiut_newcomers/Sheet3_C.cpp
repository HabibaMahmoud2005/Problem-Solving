#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<int> arr(N);
	vector<int> replacement(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (arr[i] < 0)
		{
			replacement[i] = 2;
		}
		else if (arr[i] > 0) {
			replacement[i] = 1;
		}
		else
		{
			replacement[i] = 0;
		}
	}
	for (auto it = replacement.begin(); it != replacement.end(); it++)
	{
		cout << *it << " ";
	}
	return 0;
}