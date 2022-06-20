#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
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
    ll K;
    cin >> K;

    queue<ll> q;
    REPEQ(i, 1, 9) q.push(i);

    REP(i, 0, K - 1) {
        ll x = q.front();
        q.pop();
        if (x % 10 != 0) q.push(10 * x + (x % 10) - 1);
        q.push(10 * x + (x % 10));
        if (x % 10 != 9) q.push(10 * x + (x % 10) + 1);
    }

    cout << q.front() << endl;

    return 0;
}
