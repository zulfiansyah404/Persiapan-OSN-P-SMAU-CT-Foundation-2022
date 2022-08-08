#include<bits/stdc++.h>
using namespace std;

int main () {
    int N, M;
    cin >> N >> M;
    cout << N*M/__gcd(N,M) << endl;
}