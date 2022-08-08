#include<bits/stdc++.h>
using namespace std;

void binarySearch(int N, int h[], int X) {
    int tengah, kiri, kanan, jawaban;
    kiri = 0;
    kanan = N-1;
    jawaban = -1;

    // Perulangan selama kirinya lebih kecil sama dengan kanan
    // dan jawabannya belum ketemu
    while ((kiri <= kanan) && (jawaban == -1)) {
        tengah = (kiri + kanan) / 2;

        // Kondisi nilai tengah lebih kecil dari X
        if (h[tengah] < X) {
            kiri = tengah + 1;
        } else
        // Kondisi nilai tengah lebih besar dari X
        if (h[tengah] > X) {
            kanan = tengah - 1;
        } else {
            // Kondisi nilai tengah = X
            jawaban = tengah;
        }
    }
    if (jawaban == -1) {
        cout << "beri hadiah lain" << endl;
    } else {
        cout << jawaban << endl;
    }
}

int main() {
    int N;
    cin >> N;

    int h[N];
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    // Sequential/Linear Search
    int X;
    cin >> X;

    binarySearch(N,h,X);
}