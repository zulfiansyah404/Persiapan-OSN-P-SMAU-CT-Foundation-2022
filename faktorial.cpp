#include<bits/stdc++.h>
using namespace std;

int faktorial(int x) {
    // Base Case
    if (x <= 1) {
        return 1;
    } else {
        return x * faktorial(x-1); // Relasi Rekursi
    }
}

int main () {
    int N;
    cin >> N;

    cout << faktorial(N) << endl;
}