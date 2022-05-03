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
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    ll w = tx - sx, h = ty - sy;

    string ans;
    REP(i, 0, h) ans += 'U';
    REP(i, 0, w) ans += 'R';
    REP(i, 0, h) ans += 'D';
    REP(i, 0, w) ans += 'L';
    ans += 'L';
    REP(i, 0, h + 1) ans += 'U';
    REP(i, 0, w + 1) ans += 'R';
    ans += 'D';
    ans += 'R';
    REP(i, 0, h + 1) ans += 'D';
    REP(i, 0, w + 1) ans += 'L';
    ans += 'U';

    cout << ans << endl;

    return 0;
}
