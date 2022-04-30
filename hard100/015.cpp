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
    ll N;
    cin >> N;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    vector<vector<ll>> dp(N, vector<ll>(2, 0));
    dp[0][0] = A[0];
    dp[0][1] = -A[0];

    REP(i, 1, N) {
        dp[i][0] = max(dp[i - 1][0] + A[i], dp[i - 1][1] - A[i]);
        dp[i][1] = max(dp[i - 1][0] - A[i], dp[i - 1][1] + A[i]);
    }

    cout << dp[N - 1][0] << endl;

    return 0;
}
