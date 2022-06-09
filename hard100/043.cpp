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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll H, W;
    cin >> H >> W;
    vector<vector<ll>> c(10, vector<ll>(10));
    REP(i, 0, 10) REP(j, 0, 10) cin >> c[i][j];
    vector<vector<ll>> A(H, vector<ll>(W));
    REP(i, 0, H) REP(j, 0, W) cin >> A[i][j];

    auto tbl = c;
    REP(k, 0, 10) REP(i, 0, 10) REP(j, 0, 10) chmin(tbl[i][j], tbl[i][k] + tbl[k][j]);

    ll ans = 0;
    REP(i, 0, H) REP(j, 0, W) if (A[i][j] != -1) ans += tbl[A[i][j]][1];
    cout << ans << endl;

    return 0;
}
