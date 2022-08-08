#include<bits/stdc++.h>
using namespace std;

void linearSearch(int N, int h[], int X) {
    for (int i = 0; i < N; i++) {
        if (X == h[i]) {
            cout << i << endl;
            break;
        }
    }
    cout << "beri hadiah lain" << endl;
}

int main(){
    int N;
    cin >> N;

    int h[N];
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    // Sequential/Linear Search
    int X;
    cin >> X;

    linearSearch(N,h,X);
}