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
    ll N, K;
    cin >> N >> K;
    vector<ll> x(N);
    FORE(xi, x) cin >> xi;
    x.push_back(0);
    sort(ALL(x));

    ll zeroIdx = distance(x.begin(), find(ALL(x), 0LL));

    ll ans = LLONG_MAX;
    REPEQ(l, zeroIdx - K, zeroIdx) {
        ll r = l + K;
        if(l < 0 || l > N || r > N) continue;
        ll l2r = abs(x[l]) * 2 + x[r];
        ll r2l = abs(x[l]) + x[r] * 2;
        chmin(ans, l2r);
        chmin(ans, r2l);
    }

    cout << ans << endl;

    return 0;
}
