#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

template<class T> void chmin(T &a, T b) { if (a > b) a = b; }

int main() {
    int N;
    cin >> N;
    vector<ll> h(N);
    FORE(hi, h) cin >> hi;

    vector<ll> dp(N, LLONG_MAX);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    REP(i, 2, N) {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
    cout << dp[N - 1] << endl;
}