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

ll choose(ll n) {
    if (n < 2) return 0;
    return n * (n - 1) / 2;
}

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    map<ll, ll> tbl;
    FORE(a, A) tbl[a]++;

    ll sum = 0;
    FORE(t, tbl) sum += choose(t.second);

    FORE(a, A) {
        ll d = choose(tbl[a]) - choose(tbl[a] - 1);
        ll ans = sum - d;
        cout << ans << endl;
    }

    return 0;
}
