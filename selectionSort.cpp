#include<bits/stdc++.h>
using namespace std;

void selectionSort(int N, int a[]) {
    int indexMinimum;
    for (int i = 0; i < N; i++) {
        indexMinimum = i;
        // Proses Pencarian nilai minimum
        for (int j = i+1; j < N; j++) {
            if (a[indexMinimum] > a[j]) {
                indexMinimum = j;
            }
        }

        // Tukarkan posisi ke-i dengan posisi minimum
        swap(a[i], a[indexMinimum]);
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
    selectionSort(N,a);
}