#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    ll a, b;
    cin >> a >> b;

    if (a > 0) {
        cout << "Positive" << endl;
        return 0;
    }

    if (a == 0 || b == 0 || (a < 0 && b > 0)) {
        cout << "Zero" << endl;
        return 0;
    }

    if ((abs(b - a) + 1) % 2 == 0) {
        cout << "Positive" << endl;
    } else {
        cout << "Negative" << endl;
    }

    return 0;
}