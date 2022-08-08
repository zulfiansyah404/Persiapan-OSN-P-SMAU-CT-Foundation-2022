#include<bits/stdc++.h>
using namespace std;

int main () {
    string s, s2;
    /*s = "CT Arsa Foundation";
    s2 = "arsa ";


    cout << "Panjang dari string adalah : " << s.length() << endl;
    cout << "Mencari substring s2 dari s : " << s.find(s2) << endl;
    cout << "Substring dari s dari 0 sampai 5 adalah " << s.substr(4,12) << endl;
    s.erase(3,5);
    cout << "String s setelah dihapus dari 3 sebanyak 5 : " << s << endl; // CT arsa Foundation
    s.insert(3,s2);
    cout << "String s setelah disisipkan : " << s << endl;  // CT arsa Foundation*/

    s = "bapak";
    s2 = "ct";
    int panjang = s.length();

    for (int i = 0; i < panjang; i++) {
        s[i] = s[i] - 'a' + 'A';
    }
    cout << s - s2 << endl;
    cout << s << endl;
}