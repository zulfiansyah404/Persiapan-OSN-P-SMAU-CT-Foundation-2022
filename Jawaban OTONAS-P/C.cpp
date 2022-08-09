#include<bits/stdc++.h>
using namespace std;

int main () {
    int N,M;
    cin >>  N >> M;

    long long coklat[M];
    for (int i = 0; i < M; i++) {
        cin >> coklat[i];
    }

    long long bebek[N];
    for (int i = 0; i < N; i++) {
        cin >> bebek[i];
    }

    // Bandingkan setiap berat keinginan bebek coklat mana yang paling minimal
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        long long best = LONG_LONG_MAX;
        for(int j = 0; j < M; j++) {
            if (best > abs(bebek[i]-coklat[j])) {
                best = abs(bebek[i]-coklat[j]);
            }
        }
        ans += best;
    }
    cout << ans << endl;
}   