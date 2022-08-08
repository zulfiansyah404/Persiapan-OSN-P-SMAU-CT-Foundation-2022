#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    for (int i = 1; i*i <= N; i++) {
        if (N % i == 0) {
            long long j = N/i;
            if (i == j) {
                cout << "lampu menyala" << endl;
                return 0;
            }
        }
        
    }

    cout << "lampu mati" <<

}