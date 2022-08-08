#include<bits/stdc++.h>
using namespace std;

bool prima[1000000];
int N;
int total = 0;

void primeGeneration() {
    // Awal mula kita buat seluruh elemen prima true
    memset(prima, true, sizeof(prima));

    prima[1] = false;
    for (int i = 2; i <= N; i++) {
        if (prima[i]) {
            total++;
            // Tandai seluruh kelipatan dari i adalah bukan prima
            for (int j = 2*i; j <= N; j += i) {
                prima[j] = false;
            }
        }
    }
}

int main () {
    cin >> N;
    
    primeGeneration();
    cout << total << endl;
}