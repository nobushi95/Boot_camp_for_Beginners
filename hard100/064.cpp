#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
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
    ll N, M;
    cin >> N >> M;
    vector<ll> a(M), b(M);
    REP(i, 0, M) cin >> a[i] >> b[i];

    vector<vector<bool>> g(N, vector<bool>(N, false));
    REP(i, 0, M) {
        ll A = a[i] - 1, B = b[i] - 1;
        g[A][B] = g[B][A] = true;
    }

    ll ans = 0;
    REP(l, 0, M) {
        auto cur = g;
        ll A = a[l] - 1, B = b[l] - 1;
        cur[A][B] = cur[B][A] = false;

        REP(k, 0, N) REP(i, 0, N) REP(j, 0, N) {
            cur[i][j] = cur[i][j] || (cur[i][k] && cur[k][j]);
        }

        bool isBridge = false;
        REP(i, 0, N) {
            REP(j, 0, N) {
                if (i == j) continue;
                if (!cur[i][j]) {
                    ans++;
                    isBridge = true;
                    break;
                }
            }
            if (isBridge) break;
        }
    }

    cout << ans << endl;

    return 0;
}
