#include<bits/stdc++.h>
using namespace std;

int main () {
    
    int N;
    cin >> N;
    vector<int> v(N);
    //push_back
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    cout << "Panjang vector sekarang : " << v.size() << endl; 
    int M;
    cin >> M;
    v.push_back(M);
    cout << "Panjang vector sekarang : " << v.size() << endl; 
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}