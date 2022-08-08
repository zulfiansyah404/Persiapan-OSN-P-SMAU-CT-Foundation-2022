#include<bits/stdc++.h>
using namespace std;

int K;
int arr[10000];
int N;

bool bf(int i, int sum) {
    if (sum > K) {
        return false;
    }
    if (sum == K) {
        return true;
    }
    if (i >= N) {
        return false;
    }
    bool ambil = bf(i+1, sum+arr[i]);
    bool gakAmbil = bf(i+1, sum);

    return ambil || gakAmbil;
}

int main () {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> K;

    // Algoritma Brute Force
    if (bf(0, 0) == true) {
        cout << "YA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }
}