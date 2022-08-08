#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    int i = 1;
    int M;
    int total = 0;

    while (i <= N) {
        i++;
        cin >> M;
        total += M;
    }

    cout << total << endl;

    return 0;
}