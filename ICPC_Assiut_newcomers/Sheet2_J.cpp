#include <iostream>
using namespace std;
bool isPrime(int x)
{
	if (x <= 1) return false;
	else if (x == 2) return true;
	else if (x % 2 == 0) return false;
	else {
		for (int i = 3; i < x; i+=2){
			if (x % i == 0)return false;
		}
	}
	return true;
}
int main() {
    int N;
    cin >> N;
    bool first = true;
    for (int i = 2; i < N; i++) {
        if (isPrime(i)) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
    }
    cout << endl;
    return 0;
}
