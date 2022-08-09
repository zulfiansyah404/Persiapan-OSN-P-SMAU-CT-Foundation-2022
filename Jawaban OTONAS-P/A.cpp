#include<bits/stdc++.h>
using namespace std;

long long fpb(long long a, long long b) {
    if (b == 0)
        return a;
    return fpb(b, a % b);
}

int main () {
    int N;
    cin >> N;
    long long  arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Proses Pencarian FPB
    long long ans = arr[0];
    for (int i = 1; i < N; i++) {
        ans = fpb(ans, arr[i]);
    }

    cout << ans << endl;
}