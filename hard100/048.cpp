#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
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

const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;

int main() {
    ll H, N;
    cin >> H >> N;
    vector<ll> A(N), B(N);
    REP(i, 0, N) cin >> A[i] >> B[i];

    ll maxA = *max_element(ALL(A));

    vector<ll> dp(H + maxA + 1, infl);
    dp[0] = 0;
    REPEQ(i, 0, H) {
        REP(j, 0, N) {
            chmin(dp[i + A[j]], dp[i] + B[j]);
        }
    }

    ll ans = LLONG_MAX;
    REP(i, H, H + maxA) chmin(ans, dp[i]);

    cout << ans << endl;

    return 0;
}
