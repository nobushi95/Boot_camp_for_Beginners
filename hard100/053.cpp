#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N;
    cin >> N;
    vector<ll> x(N), y(N);
    REP(i, 0, N) cin  >> x[i] >> y[i];

    map<pair<ll, ll>, ll> tbl;
    REP(i, 0, N) REP(j, i + 1, N) {
        ll dx = x[i] - x[j];
        ll dy = y[i] - y[j];
        if (dx > 0) tbl[{dx, dy}]++;
        else if (dx < 0) tbl[{-dx, -dy}]++;
        else tbl[{0, abs(dy)}]++;
    }

    ll tbl_max = 0;
    FORE(t, tbl) chmax(tbl_max, t.second);
    cout << N - tbl_max << endl;

    return 0;
}
