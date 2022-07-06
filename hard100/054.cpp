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
    ll X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    vector<ll> p(A), q(B), r(C);
    FORE(pi, p) cin >> pi;
    FORE(qi, q) cin >> qi;
    FORE(ri, r) cin >> ri;

    sort(ALL(p), greater<>());
    sort(ALL(q), greater<>());
    sort(ALL(r), greater<>());

    vector<ll> eat;
    eat.reserve(X + Y);
    REP(i, 0, X) eat.push_back(p[i]);
    REP(i, 0, Y) eat.push_back(q[i]);
    sort(ALL(eat));

    REP(i, 0, min(C, X + Y)) chmax(eat[i], r[i]);

    ll ans = 0;
    FORE(a, eat) ans += a;

    cout << ans << endl;

    return 0;
}
