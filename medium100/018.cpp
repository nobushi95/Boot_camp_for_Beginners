#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }

int main() {
    vector<vector<ll>> c(3, vector<ll>(3, 0));
    REP(i, 0, 3) REP(j, 0, 3) cin >> c[i][j];

    vector<ll> a(3), b(3);
    REP(a1, 0, 100) {
        a[0] = a1;
        b[0] = c[0][0] - a[0];
        b[1] = c[0][1] - a[0];
        b[2] = c[0][2] - a[0];
        a[1] = c[1][0] - b[0];
        a[2] = c[2][0] - b[0];

        bool isCorrect = true;
        REP(i, 0, 3) REP(j, 0, 3) {
            isCorrect = isCorrect && (c[i][j] == a[i] + b[j]);
        }
        if (isCorrect) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
