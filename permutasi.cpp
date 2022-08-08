#include<bits/stdc++.h>
using namespace std;

int catat[100000];
int N;
bool pernah[100000];

void tulis(int kedalaman) {
    if (kedalaman == N) {
        for (int i = 0; i < N; i++) {
            cout << catat[i];
        }
        cout << endl;
    } else {
        for (int i = 1; i <= N; i++) {
            if (!pernah[i]) {
                catat[kedalaman] = i;
                pernah[i] = true;
                tulis(kedalaman + 1);
                pernah[i] = false;
            }
            
        }
    }
}

int main () {
    cin >> N;

    tulis(0);
}