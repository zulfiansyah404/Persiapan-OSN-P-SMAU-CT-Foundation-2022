#include<bits/stdc++.h>
using namespace std;

int N;
int total;
int M;

int main () {
    cin >> N;
    total = 0;

    for (int i = 0; i < N; i++) {
        cin >> M;
        total += M;
    }

    cout << total << endl;
    
}