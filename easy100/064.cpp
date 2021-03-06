#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    string O, E;
    cin >> O >> E;

    int oi = 0;
    int ei = 0;
    REP(i, 0, O.size() + E.size()) {
        char c;
        if (i % 2 == 0) {
            c = O[oi];
            oi++;
        } else {
            c = E[ei];
            ei++;
        }
        cout << c;
    }
    cout << endl;

    return 0;
}