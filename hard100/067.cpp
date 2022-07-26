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

vector<ll> pat, layer;

ll f(ll level, ll x) {
    if (level == 0) return 1;

    if (x < 1) return 0;
    x--;

    if (x < layer[level - 1]) return f(level - 1, x);
    x -= layer[level - 1];

    if (x < 1) return pat[level - 1] + 1;
    x--;

    if (x < layer[level - 1]) return pat[level - 1] + 1 + f(level - 1, x);
    x -= layer[level - 1];

    return pat[level - 1] * 2 + 1;
}

int main() {
    ll N, X;
    cin >> N >> X;
    pat.resize(N + 1);
    layer.resize(N + 1);
    layer[0] = 1;
    REPEQ(i, 1, N) layer[i] = layer[i - 1] * 2 + 3;
    pat[0] = 1;
    REPEQ(i, 1, N) pat[i] = pat[i - 1] * 2 + 1;

    cout << f(N, X - 1) << endl;

    return 0;
}
