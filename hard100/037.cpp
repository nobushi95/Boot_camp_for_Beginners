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
    ll H, W, K;
    cin >> H >> W >> K;
    vector<string> s(H);
    FORE(si, s) cin >> si;

    vector<vector<ll>> ans(H, vector<ll>(W, 0));
    ll num = 1;
    REP(i, 0, H) REP(j, 0, W) {
        if (s[i][j] == '#') {
            ans[i][j] = num;
            num++;
        }
    }

    REP(i, 0, H) REP(j, 1, W) {
        if (ans[i][j] == 0) ans[i][j] = ans[i][j - 1];
    }

    REP(i, 0, H) RREP(j, W - 2, 0) {
        if (ans[i][j] == 0) ans[i][j] = ans[i][j + 1];
    }

    REP(i, 1, H) REP(j, 0, W) {
        if (ans[i][j] == 0) ans[i][j] = ans[i - 1][j];
    }

    RREP(i, H - 2, 0) REP(j, 0, W) {
        if (ans[i][j] == 0) ans[i][j] = ans[i + 1][j];
    }

    REP(i, 0, H) REP(j, 0, W) {
        cout << ans[i][j];
        if (j == W - 1) cout << endl;
        else cout << " ";
    }

    return 0;
}
