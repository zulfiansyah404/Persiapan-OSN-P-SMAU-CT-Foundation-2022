#include<bits/stdc++.h>
using namespace std;

int main() {    
    int R,C;
    cin >> R >> C;
    string arr[R];

    for (int i = 0; i < R; i++) {
        cin >> arr[i];
    }

    while(true) {
        int runtuh = 0, barisRuntuh = -1;
        bool apakahAdaYangDiruntuhkan = false;
        for (int i = R-1; i >= 0; i--) {
            for (int j = 0; j < C; j++) {
                if (arr[i][j] == '1') {
                    runtuh++;
                } else {
                    // Kalau terdapat kosong di suatu baris-i, langsung berhenti pengecekan
                    break;
                }
            }
            //Proses Penghapusan
            if (runtuh == C) {
                apakahAdaYangDiruntuhkan = true;
                // Hapus semua batu yang ada di baris ke-i
                for (int j = 0; j < C; j++) {
                    arr[i][j] = '0';
                }
                // Tandai baris ke-i adalah yang paling bawah jika belum ditadai sebelumnya
                if (barisRuntuh == -1) {
                    barisRuntuh = i;
                }
            }
            runtuh = 0;
        }
        // Kalau kotak tersebut tidak ada yang diruntuhkan, maka proses peruntuhan selesai
        if (apakahAdaYangDiruntuhkan == false) {
            break;
        }

        // Peruntuhan
        for (int i = 0; i < C; i++) {
            for (int j = barisRuntuh-1; j >= 0; j--) {
                if (arr[j][i] == '1') {
                    // Proses jatuh
                    int k = j;
                    while ((arr[k+1][i] == '0') && (k+1 < R)) {
                        swap(arr[k][i], arr[k+1][i]);
                        k++;
                    }
                }
            }
        }
    }
    for (int i = 0; i < R; i++) {
        cout << arr[i] << endl;
    }

    
}