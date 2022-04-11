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
    vector<ll> x(M), y(M);
    REP(i, 0, M) cin >> x[i] >> y[i];

    vector<pair<bool, ll>> tbl(N, {false, 1});
    tbl[0] = {true, 1};

    REP(i, 0, M) {
        ll xi = x[i] - 1;
        ll yi = y[i] - 1;
        if (tbl[xi].first) {
            tbl[yi].first = true;
            tbl[yi].second++;
            tbl[xi].second--;
            if (tbl[xi].second == 0) tbl[xi].first = false;
        } else {
            tbl[xi].second--;
            tbl[yi].second++;
        }
    }

    ll ans = count_if(ALL(tbl), [](auto &v) { return v.first && v.second > 0; } );
    cout << ans << endl;

    return 0;
}
