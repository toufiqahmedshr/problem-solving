#include <iostream>
using namespace std;
 
int main()
{
    int n, i;
    scanf("%d", &n);
    string word[n];
 
    for (i = 0; i < n; i++) {
        cin >> word[i];
    }
 
    for (i = 0; i < n; i++) {
        if (word[i].length() > 10) {
            word[i] = word[i].front() + to_string(word[i].length() - 2) + word[i].back();
            cout << word[i] << endl;
        } else {
            cout << word[i] << endl;
        }
    }
 
    return 0;
}