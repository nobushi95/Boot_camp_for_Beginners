#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    string S;
    cin >> S;

    multiset<char> tbl;
    for (const auto &c : S) {
        tbl.insert(c);
    }

    for (const auto &c : S) {
        if (tbl.count(c) > 1 ) {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;

    return 0;
}