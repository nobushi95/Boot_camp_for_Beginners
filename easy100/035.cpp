#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    string S;
    cin >> S;

    map<char, ll> tbl;
    for (auto c: S) {
        tbl[c]++;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (tbl[c] == 0) {
            cout << c << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    
    return 0;
}