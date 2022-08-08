#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;

    bool prima = true;
    for (int i = 2; i*i <= N; i++) {
        if (N % i == 0) {
            prima = false;
            break;
        }
    }

    if ((prima) && (N > 1)) {
        cout << "Ini bilangan Prima" << endl;
    } else {
        cout << "Ini bukan bilangan prima" << endl;
    }
}