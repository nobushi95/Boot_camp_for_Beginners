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
    ll N, W;
    cin >> N >> W;
    vector<ll> w(N), v(N);
    REP(i, 0, N) {
        cin >> w[i] >> v[i];
    }

    vector<vector<ll>> dp(N + 1, vector<ll>(W + 1, 0));

    REP(i, 0, N) {
        REPEQ(j, 0, W) {
            if (j - w[i] >= 0) {
                chmax(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
            }

            chmax(dp[i + 1][j], dp[i][j]);
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}
