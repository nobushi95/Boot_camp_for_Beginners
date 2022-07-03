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

using mint = atcoder::modint1000000007;

mint combination(ll n, ll k) {
    mint res = 1;
    REP(i, 0, k) res *= (n - i);
    REP(i, 0, k) res /= (k - i);
    return res;
}

int main() {
    ll X, Y;
    cin >> X >> Y;

    if ((2 * X - Y) % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    ll b = (2 * X - Y) / 3;
    ll a = X - 2 * b;
    if (a < 0 || b < 0) {
        cout << 0 << endl;
        return 0;
    }

    mint ans = combination(a + b, a);
    cout << ans.val() << endl;

    return 0;
}
