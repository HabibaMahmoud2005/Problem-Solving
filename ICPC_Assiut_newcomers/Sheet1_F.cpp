#include <iostream>
using namespace std;
int main()
{//notice long long
	long long N, M;
	cin >> N >> M;
	cout << (N % 10) + (M % 10);
	return 0;
}