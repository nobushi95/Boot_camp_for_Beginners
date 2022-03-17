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
    ll K, A, B;
    cin >> K >> A >> B;

    if (K == 1) {
        cout << K + 1 << endl;
        return 0;
    }

    ll cur = 1;
    while (cur < A) {
        cur++;
        K--;
        if (K == 0) {
            cout << cur << endl;
            return 0;
        }
    }

    if (K >= 2) {
        ll aToB = B - A;
        if (aToB > 2) {
            cur += aToB * (K / 2);
            cur += K % 2;
        } else {
            cur += K;
        }
    } else {
        cur++;
    }

    cout << cur << endl;

    return 0;
}
