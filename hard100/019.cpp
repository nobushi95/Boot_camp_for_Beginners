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
    ll H, W, N;
    cin >> H >> W >> N;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    vector<vector<ll>> ans(H, vector<ll>(W, 0));

    ll col = 0;
    REP(y, 0, H) REP(x, 0, W) {
        if (y % 2 == 0) {
            ans[y][x] = col + 1;
        } else {
            ans[y][W - 1 - x] = col + 1;
        }

        a[col]--;
        if (a[col] == 0) col++;
    }

    REP(y, 0, H) {
         REP(x, 0, W) {
             if (x > 0) cout << " ";
             cout << ans[y][x];
         }
         cout << endl;
    }

    return 0;
}
