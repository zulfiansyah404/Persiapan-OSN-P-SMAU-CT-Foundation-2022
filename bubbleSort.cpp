#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int N, int a[]) {
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-i; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }

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
    bubbleSort(N,a);
}