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
    ll S;
    cin >> S;

    ll x1 = 0, y1 = 0;
    ll x2 = 1;
    ll y2 = 1000000000;
    ll x3 = (S + 1000000000 - 1) / 1000000000;
    ll y3 = x3 * 1000000000 - S;

    cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << endl;

    return 0;
}
