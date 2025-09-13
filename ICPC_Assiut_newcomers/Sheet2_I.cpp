#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string num = to_string(N);
    string reversed;
    reversed.resize(num.size());    // allocate memory
    for (int i = 0 ; i<num.size() ;i++)
    {
        reversed[i] = num[num.size() - 1 - i];
    }
    if (reversed == num) {
        cout << num << endl << "YES";
    }
    else {
        cout << stoi(reversed) << endl << "NO";
    }   // stoi is to convert string into int
    return 0;
}