#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    vector<int> gcdA(0);
    vector<int> gcdB(0);
    for (int i = 1; i <= A; i++)
        if (A % i == 0) gcdA.push_back(i);
    for (int i = 1; i <= B ; i++)
        if (B % i == 0) gcdB.push_back(i);
    vector<int> common(0);
    for (int i = 0; i < gcdA.size(); i++)
        for (int j = 0; j < gcdB.size(); j++)
            if (gcdA[i] == gcdB[j]) common.push_back(gcdA[i]);
    int max = common[0];
    for (int k = 1; k < common.size(); k++)
        if (common[k] > max) max = common[k];
    cout << max;
    return 0;
}