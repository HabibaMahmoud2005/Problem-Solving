#include<iostream>
using namespace std;
int main()
{
	long long X = 0, A = 1, B = 1, C = 1, D = 1;
	cin >> A >> B >> C >> D;
	X = (A * B) - (C * D);
	cout << "Difference = " << X;
}