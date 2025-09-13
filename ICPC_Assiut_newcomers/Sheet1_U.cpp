#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float N, m;
    cin >> N;
    m = N - int(N);
    if (m == 0) cout << "int " << N;
    else cout << "float " << int(N) << " " << fixed << setprecision(m);
    return 0;
}
