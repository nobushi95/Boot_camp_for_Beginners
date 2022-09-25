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

int main() {
    ll N;
    cin >> N;
    vector<vector<vector<ll>>> F(N, vector<vector<ll>>(5, vector<ll>(2)));
    REP(i, 0, N) REP(j, 0, 5) REP(k, 0, 2) cin >> F[i][j][k];
    vector<vector<ll>> P(N, vector<ll>(11));
    REP(i, 0, N) REP(j, 0, 11) cin >> P[i][j];

    ll ans = -infl;
    REP(msk, 1, 1 << 10) {
        ll sum = 0;
        REP(i, 0, N) {
            ll cur = 0;
            REP(j, 0, 5) REP(k, 0, 2) {
                if (msk & (1 << (5 * k + j))) {
                    if (F[i][j][k]) cur++;
                }
            }
            sum += P[i][cur];
        }
        chmax(ans, sum);
    }

    cout << ans << endl;

    return 0;
}
