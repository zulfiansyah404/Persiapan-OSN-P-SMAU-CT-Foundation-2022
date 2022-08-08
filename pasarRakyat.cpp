#include<bits/stdc++.h>
using namespace std;

int kpk(int a, int b){
    return a * b / __gcd(a,b);
}

int main(){
    int N, x, p = 1;
    cin >> N;
    for (int i=0;i < N; i++){
        cin >> x;
        p = kpk(p,x);
    }
    cout << p << endl;
    return 0;
}