#include<bits/stdc++.h>
using namespace std;

bool cekPrima(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++) {
        if (cekPrima(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}