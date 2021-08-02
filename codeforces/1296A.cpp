#include <bits/stdc++.h>
using namespace std;
 
const int mx = 2e3 + 100;
int ara[mx];
int n;
 
int main()
{
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            cin >> ara[i];
            if (ara[i] & 1)
                odd++;
            else
                even++;
        }
        if (odd == 0 || (even == 0 && n % 2 == 0))
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
 
    }
    return 0;
}