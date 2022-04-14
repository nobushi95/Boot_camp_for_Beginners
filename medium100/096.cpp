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
    ll N, M;
    cin >> N >> M;
    vector<ll> a(M);
    FORE(ai, a) cin >> ai;

    map<ll, bool> broken;
    FORE(ai, a) {
        broken[ai] = true;
    }

    vector<ll> dp(N + 10, 0);
    dp[0] = 1;
    REPEQ(i, 0, N) {
        if (!broken[i + 1]) {
            dp[i + 1] += dp[i];
            dp[i + 1] %= 1000000007;
        }
        if (!broken[i + 2]) {
            dp[i + 2] += dp[i];
            dp[i + 2] %= 1000000007;
        }
    }

    cout << dp[N] << endl;

    return 0;
}
