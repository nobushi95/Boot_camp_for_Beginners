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
    vector<ll> X(N), L(N);
    REP(i, 0, N) cin >> X[i] >> L[i];

    vector<pair<ll, ll>> arm(N);
    REP(i, 0, N) {
        arm[i].first = X[i] - L[i];
        arm[i].second = X[i] + L[i];
    }

    sort(ALL(arm), [](auto &l, auto &r) { return l.second < r.second; });

    ll cur = LLONG_MIN;
    ll ans = 0;
    REP(i, 0, N) {
        if (cur <= arm[i].first) {
            ans++;
            cur = arm[i].second;
        }
    }

    cout << ans << endl;

    return 0;
}
