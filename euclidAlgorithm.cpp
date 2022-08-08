#include<bits/stdc++.h>
using namespace std;

int fpb(int a, int b) {
    if (b == 0)
        return a;
    return fpb(b, a % b);
}

int main () {
    int N, M;
    cin >> N >> M;
    cout << fpb(N,M) << endl;
}