#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int m, n, o, s = 0;
    while (t--)
    {
        cin >> m >> n >> o;
        if (m + n + o >= 2)
            s += 1;
    }
    cout << s;
    return 0;
}