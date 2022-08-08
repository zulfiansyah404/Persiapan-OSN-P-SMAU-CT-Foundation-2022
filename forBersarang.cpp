#include<bits/stdc++.h>
using namespace std;

int main () {
    int N, M;
    cin >> N;

    for (int i = 0; i < N; i++) {
        // Proses Penulisan Bintang setiap baris

        // Print spasi
        for (int j = 0; j < N-i; j++) {
            cout << ' ';
        }
        
        // Print bintang
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }

        cout << endl;
    }
}