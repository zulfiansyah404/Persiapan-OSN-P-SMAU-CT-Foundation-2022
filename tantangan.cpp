#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;

    int i = 0, j = s.length()-1;

    bool ans = true;
    while (i < j) {
        if (s[i] != s[j]) {
            ans = false;
            break;
        } else {
            i++;
            j--;
        }

    }
    if (ans) {
        cout << "IYA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }
}