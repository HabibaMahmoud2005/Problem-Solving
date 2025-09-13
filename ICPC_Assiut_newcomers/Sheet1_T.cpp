#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int arr[3] = { A,B,C };
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < 3; i++) cout << arr[i] << endl;
    cout << endl;
    cout << A << endl << B << endl << C;
    return 0;
}
//BUBBLE SORT