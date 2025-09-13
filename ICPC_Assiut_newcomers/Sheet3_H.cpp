#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
    //Bubble sort
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N-1; i++)
        {
            if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
        }
    }
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
    return 0;
}