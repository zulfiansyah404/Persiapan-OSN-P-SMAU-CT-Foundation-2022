#include<bits/stdc++.h>
using namespace std;

bool cekPrima(int x) {
    if (x <= 1) 
        return false;

    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    if (cekPrima(N)) {
        cout << "Ini adalah bilangan prima" << endl;
    } else {
        cout << "Ini bukan bilangan prima" << endl;
    }
}