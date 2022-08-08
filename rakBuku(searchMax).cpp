#include<bits/stdc++.h>
using namespace std;

bool sudahDicek[25000];

int main () {
    int N,B;
    cin >> N >> B;

    int bebek[N];
    for (int i = 0; i < N; i++) {
        cin >> bebek[i];
    }

    int jmlBebek = 0;
    int TinggiBebek = 0;
    while (TinggiBebek < B) {
        int maks = -1;
        int iMaks = -1;
        for (int i = 0; i < N; i++) {
            if (!sudahDicek[i]) {
                if (maks < bebek[i]) {
                    maks = bebek[i];
                    iMaks = i;
                }
            }
        }

        TinggiBebek += maks;
        sudahDicek[iMaks] = true;
        jmlBebek++;
    }

    cout << jmlBebek << endl;
    
}