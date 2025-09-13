#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;
	cout << "floor " << A << " / " << B << " = " << floor(float(A) / float(B)) << endl;
	cout << "ceil " << A << " / " << B << " = " << ceil(float(A) / float(B)) << endl;
	cout << "round " << A << " / " << B << " = " << round(float(A) / float(B)) << endl;
	return 0;

}