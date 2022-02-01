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
    int A, B;
    cin >> A >> B;

    REPEQ(i, 1, 1010) {
        int priceA = i * 8 / 100;
        int priceB = i / 10;
        if ((priceA == A) && (priceB == B)) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}