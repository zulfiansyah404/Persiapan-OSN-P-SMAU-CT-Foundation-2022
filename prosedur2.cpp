#include<bits/stdc++.h>
using namespace std;

void roker(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int N,M;
    cin >> N >> M;

    roker(N,M);
    cout << N << " " <<  M << endl;
}