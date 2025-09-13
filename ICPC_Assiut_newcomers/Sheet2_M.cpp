#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    string j = "";
    vector<pair<int, bool>> isLucky;
    bool found = false;
    for (int i = A; i <= B; i++)
    {
        j = to_string(i);
        bool valid = true;
        for (int k = 0; k < j.size(); k++)
        {
            if (j[k] == '4' || j[k] == '7') {
                isLucky.push_back({ j[k] - '0', true });
            }
            else {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << i <<" ";
			found = true;
        }
        isLucky.clear();
    }
	if (!found) {
        cout << -1;
	}
    return 0;
}
