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
    ll x, y;
    cin >> x >> y;

    if (y == 0) {
        if (x == 0) {
            cout << 0 << endl;
        } else if (x > 0) {
            cout << x + 1 << endl;
        } else {
            cout << abs(x) << endl;
        }
        return 0;
    }

    ll ans;
    if (x == 0) {
        ans = abs(y);
        if (y < 0) ans++;
    } else if (x > 0) {
        if (y >= 0) {
            if (y >= x) {
                ans = y - x;
            } else {
                ans = 2;
                ans += abs(y - x);
            }
        } else {
            if (abs(y) >= x) {
                ans = 1;
                ans += abs(y) - x;
            } else {
                ans = 1;
                ans += x - abs(y);
            }
        }
    } else if (x < 0) {
        if (y >= 0) {
            if (abs(x) <= y) {
                ans = 1;
                ans += y - abs(x);
            } else {
                ans = 1;
                ans += abs(x) - y;
            }
        } else {
            if (x <= y) {
                ans = y - x;
            } else {
                ans = 2;
                ans += abs(y - x);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
