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
    vector<string> s(H);
    FORE(si, s) cin >> si;

    vector<vector<ll>> dp(H, vector<ll>(W, LLONG_MAX));
    if (s[0][0] == '#') dp[0][0] = 1;
    else dp[0][0] = 0;

    vector<ll> dx = {1, 0};
    vector<ll> dy = {0, 1};

    REP(i, 0, H) {
        REP(j, 0, W) {
            REP(d, 0, 2) {
                ll ni = i + dx[d];
                ll nj = j + dy[d];
                if (ni > H - 1 || nj > W - 1) continue;
                if (s[i][j] == '.' && s[ni][nj] == '#') chmin(dp[ni][nj], dp[i][j] + 1);
                else chmin(dp[ni][nj], dp[i][j]);
            }
        }
    }

    cout << dp[H - 1][W - 1] << endl;

    return 0;
}
