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

int main() {
    ll N, x;
    cin >> N >> x;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    ll ans = 0;
    if (a[0] > x) {
        ans += a[0] - x;
        a[0] = x;
    }

    REP(i, 0, N - 1) {
        ll sum = a[i] + a[i + 1];
        if (sum > x) {
            ll diff = sum - x;
            ans += sum - x;
            a[i + 1] -= diff;
        }
    }

    cout << ans << endl;

    return 0;
}
