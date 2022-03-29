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
    ll W, H, N;
    cin >> W >> H >> N;
    vector<ll> x(N), y(N), a(N);
    REP(i, 0, N) cin >> x[i] >> y[i] >> a[i];

    vector<ll> right, left, top, bottom;
    REP(i, 0, N) {
        if (a[i] == 1) left.push_back(x[i]);
        if (a[i] == 2) right.push_back(x[i]);
        if (a[i] == 3) bottom.push_back(y[i]);
        if (a[i] == 4) top.push_back(y[i]);
    }

    sort(ALL(right));
    sort(ALL(left));
    sort(ALL(bottom));
    sort(ALL(top));

    ll t = top.size() == 0 ? H : top.front();
    ll b = bottom.size() == 0 ? 0 : bottom.back();
    ll h = t - b;

    ll r = right.size() == 0 ? W : right.front();
    ll l = left.size() == 0 ? 0 : left.back();
    ll w = r - l;

    if (h < 0 || w < 0) {
        cout << 0 << endl;
        return 0;
    }

    cout << h * w << endl;

    return 0;
}
