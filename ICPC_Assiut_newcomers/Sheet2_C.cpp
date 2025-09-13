#include <iostream>
using namespace std;
int main() {
	int N,X;
	cin >> N;
	int even = 0, odd = 0, positive = 0, negative = 0;
	while (N--) {
		cin >> X;
		if (X % 2 == 0) even++;
		else odd++;
		if (X > 0) positive++;
		else if (X < 0) negative++;
	}
	cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << positive << endl << "Negative: " << negative;
	return 0;
}