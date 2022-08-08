#include<bits/stdc++.h>
using namespace std;

long pembagi = 1000000;

long long solve(long long x, long long y) {
    long long hasil = 1;
    while (y != 1) {
        // Genap
        if (y % 2 == 0) {
            x = ((x % pembagi) * (x % pembagi)) % pembagi;
            y = y/2;
        } else {
            // Ganjil
            hasil = ((hasil % pembagi) * (x % pembagi)) % pembagi;
            y--;
        }
    }
    hasil = ((hasil % pembagi) * (x % pembagi)) % pembagi;
    return hasil;
}

bool apakahLebih(long long A, long long B) {
    long long abiUmri = 1;
    long long abiAmin = 0;

    while (abiUmri < 1000000) {
        abiUmri *= A;
        abiAmin++;
    }

    if (abiAmin <= B) {
        return true;
    } else {
        return false;
    }
}

int cekDigit(long x) {
    long ans = 0;
    if (x == 0) {
        return 1;
    }
    while (x != 0) {
        x /= 10;
        ans++;
    }
    return ans;
}

int main () {
    long long A,B;
    cin >> A >> B;

    if (B == 0) {
        cout << 1 << endl;
        return 0;
    }
    if (A == 1) {
        cout << 1 << endl;
        return 0;
    }

    long long ans = solve(A,B);
    //cout << ans << endl;

    if (apakahLebih(A,B)) {
        //cout << "HALO" << endl;
        int digit = cekDigit(ans);
        for (int i = 1; i <= 6-digit; i++) {
            cout << 0;
        }
        cout << ans << endl;
    } else {
        cout << ans << endl;
    }
    
}