#include<bits/stdc++.h>
using namespace std;

void insertionSort(int N, int a[]) {
    for (int i = 0; i < N; i++) {
        int pos = i;

        // Operasi Penyissipan
        while ((pos > 0) && (a[pos-1] > a[pos])) {
            swap(a[pos-1], a[pos]);
            pos--;
        }
    }

    // Output
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int N;
    cin >> N;

    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // Sequential/Linear Search
    insertionSort(N,a);
}