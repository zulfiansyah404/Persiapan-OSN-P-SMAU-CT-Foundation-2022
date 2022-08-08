#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // STL Sort C++
    sort(A, A+5);

    for (int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}