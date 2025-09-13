#include <iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;
	while (1) {
		if (X == 1999) {
			cout << "Correct";
			break;
		}
		else {
			cout << "Wrong" << endl;
			cin >> X;
		}
	}
	return 0;
}
