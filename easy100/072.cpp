#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int X;
    cin >> X;

    if (X == 1) {
        cout << 1 << endl;
        return 0;
    }

    int max = 0;
    REPEQ(i, 2, X) {
        for (int j = 2;; j++) {
            int beki = pow(i, j);
            if (beki > X) break;
            chmax(max, beki);
        }
    }

    cout << max << endl;

    return 0;
}