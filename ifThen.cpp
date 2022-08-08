#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;

    cin >> N;   

    if (N > 0) {
        cout << "positif" << endl;
    } else 
    if (N < 0) {
        cout << "negatif" << endl;
    } else {
        cout << "nol" << endl;
    }
    /*if ((N % 2 == 0) && (N > 0)) {
        cout << N << endl;
    }*/
}