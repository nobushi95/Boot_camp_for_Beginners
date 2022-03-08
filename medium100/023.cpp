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
    ll N, M;
    cin >> N >> M;
    vector<ll> s(M), c(M);
    REP(i, 0, M) cin >> s[i] >> c[i];

    if (N >= 2) {
        REP(i, 0, M) {
            if (s[i] == 1 && c[i] == 0) {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    vector<pair<bool, ll>> ans(N, {false, 0});
    REP(i, 0, M) {
        ll idx = s[i] - 1;
        if (ans[idx].first) {
            if (ans[idx].second != c[i]) {
                cout << -1 << endl;
                return 0;
            }
        } else {
            ans[idx] = {true, c[i]};
        }
    }

    if (N >=2 && ans[0].second == 0) ans[0].second = 1;

    FORE(a, ans) cout << a.second;
    cout << endl;

    return 0;
}
