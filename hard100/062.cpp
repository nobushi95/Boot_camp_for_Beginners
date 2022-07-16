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
    ll H, W;
    cin >> H >> W;
    vector<string> S(H);
    FORE(s, S) cin >> s;

    vector<vector<ll>> L(H, vector<ll>(W, 0LL)), R(H, vector<ll>(W, 0LL)), D(H, vector<ll>(W, 0LL)), U(H, vector<ll>(W, 0LL));

    REP(i, 0, H) REP(j, 0, W) {
        if (S[i][j] == '#') continue;
        L[i][j]++;
        if (j > 0) L[i][j] += L[i][j - 1];
    }

    REP(i, 0, H) RREP(j, W - 1, 0) {
        if (S[i][j] == '#') continue;
        R[i][j]++;
        if (j < W - 1) R[i][j] += R[i][j + 1];
    }

    REP(j, 0, W) REP(i, 0, H) {
        if (S[i][j] == '#') continue;
        D[i][j]++;
        if (i > 0) D[i][j] += D[i - 1][j];
    }

    REP(j, 0, W) RREP(i, H - 1, 0) {
        if (S[i][j] == '#') continue;
        U[i][j]++;
        if (i < H - 1) U[i][j] += U[i + 1][j];
    }

    ll ans = 0;
    REP(i, 0, H) REP(j, 0, W) {
        ll cur = L[i][j] + R[i][j] + D[i][j] + U[i][j] - 3;
        chmax(ans, cur);
    }

    cout << ans << endl;

    return 0;
}
