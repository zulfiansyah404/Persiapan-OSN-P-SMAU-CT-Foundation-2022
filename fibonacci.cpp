#include<bits/stdc++.h>
using namespace std;

int fibo[100000];

int f(int x) {
    // Base Case
    if (x <= 1) {
        return x;
    }
    if (fibo[x] != 0) {
        return fibo[x];
    }
    fibo[x] = f(x-1) + f(x-2);
    return fibo[x];
}

int main () {
    int N;
    cin >> N;

    //memset(fibo, 0, sizeof(fibo));

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;
        cout << f(M) << endl;
    }
}