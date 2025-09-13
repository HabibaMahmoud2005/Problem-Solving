#include <iostream>
using namespace std;

int main()
{
	int X;
	bool Prime = true;
	cin >> X;
	if (X <= 1) cout << "NO";
	else if (X == 2) cout << "YES";
	else if (X % 2 == 0) cout << "NO";
	else {
		for (int i = 3; i < X; i += 2)
		{
			if (X % i == 0) {
				Prime = false;
				break;
			}
		}
		if (Prime) cout << "YES";
		else cout << "NO";
	}
	return 0;
}
/*
OPTIMIXED VERSION
for (int i = 3; i * i <= X; i += 2)
Instead of looping up to X, you can improve efficiency by checking up to √X
Because if a number has a factor larger than √X, the other factor must be smaller.
*/