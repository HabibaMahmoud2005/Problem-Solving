#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double R;
	cin >> R;
	const double pi = 3.141592653;
	cout << fixed << setprecision(9) << R * R * pi << endl;
	return 0;
}