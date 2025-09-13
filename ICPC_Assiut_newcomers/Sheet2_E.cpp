#include <iostream>
using namespace std;

int main()
{
	int N,Y;
	cin >> N;
	int MAX = INT_MIN;	//<climits>
	while (N--) {
		cin >> Y;
		MAX = max(Y, MAX);	//<algorithm>
	}
	cout << MAX;
	return 0;
}
