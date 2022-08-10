#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
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

vector<ll> dp;

ll fun(ll cur) {
    if (cur == 0) return 0;
    if (dp[cur] != 0) return dp[cur];

    ll res = infl;

    chmin(res, fun(cur - 1) + 1);

    ll x = 6;
    while (x <= cur) {
        chmin(res, fun(cur - x) + 1);
        x *= 6;
    }

    ll y = 9;
    while (y <= cur) {
        chmin(res, fun(cur - y) + 1);
        y *= 9;
    }

    dp[cur] = res;
    return res;
}

int main() {
    ll N;
    cin >> N;
    dp.resize(N + 100, 0);
    cout << fun(N) << endl;
    return 0;
}
