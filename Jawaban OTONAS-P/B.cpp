#include<bits/stdc++.h>
using namespace std;

int N,K,C;

int main () {
    
    cin >> N >> K >> C;
    K = K - (C * N);

    if (K <= 0) {
        cout << 0 << endl;
        return 0;
    }

    cout << solve(N,K);

}
