#include<bits/stdc++.h>
using namespace std;

int main () {
    int N,B;
    cin >> N >> B;

    int bebek[N];
    for (int i = 0; i < N; i++) {
        cin >> bebek[i];
    }

    sort(bebek, bebek + N);

    int jumlahTinggiBebek = 0;
    int jumlahBebek = 0;

    for (int i = N-1; i >= 0; i--) {
        jumlahTinggiBebek += bebek[i];
        jumlahBebek++;
        if (jumlahTinggiBebek >= B) {
            cout << jumlahBebek << endl;
            break;
        }
    }
}