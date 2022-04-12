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

#include <cmath>
int main() {
    ll a, b, x;
    cin >> a >> b >> x;

    double h = a * a * b / 2.0;

    double r;
    if (x < h) {
        double t = a * b * b / (2.0 * x);
        r = atan(t);
    } else {
        double t = double(2 * b) / a - double(2 * x) / (a * a * a);
        r = atan(t);
    }

    double ans = r * (180 / M_PI);
    cout << fixed << setprecision(7) << ans << endl;

    return 0;
}
