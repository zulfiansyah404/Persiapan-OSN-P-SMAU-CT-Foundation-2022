#include<bits/stdc++.h>
using namespace std;

int N,K,C;

long long solve(int n, int k) {
    if (n == 1) {
        return 1;
    }

    long long ans = 0;
    for (int i = 0; i <= k; i++) {
        ans += solve(n-1, k-i);
    }

    return ans;

}  

int main () {
    
    cin >> N >> K >> C;
    K = K - (C * N);

    if (K <= 0) {
        cout << 0 << endl;
        return 0;
    }

    cout << solve(N,K);

}
