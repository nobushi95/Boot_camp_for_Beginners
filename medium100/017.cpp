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
    ll N, T;
    cin >> N >> T;
    vector<ll> t(N);
    FORE(ti, t) cin >> ti;

    ll ans = 0;
    REP(i, 0, N - 1) {
        ll d = t[i + 1] - t[i];
        if (d > T) {
            ans += T;
        } else {
            ans += d;
        }
    }
    ans += T;

    cout << ans << endl;

    return 0;
}
