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
    ll N, X, Y;
    cin >> N >> X >> Y;

    vector<ll> tbl(N + 100);

    REP(i, 0, N) REP(j, i + 1, N) {
        ll k = LLONG_MAX;
        chmin(k, j - i);
        chmin(k, abs(X - 1 - i) + abs(Y - 1 - j) + 1);
        tbl[k]++;
    }

    REP(k, 1, N) cout << tbl[k] << endl;

    return 0;
}
