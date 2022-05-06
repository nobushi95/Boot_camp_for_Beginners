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

ll comb(ll n, ll r) {
    ll rr = min(n - r, r);
    if (rr == 1) return n;

    ll comb = 1;
    REP(i, 0, rr) comb *= n - i;
    REPEQ(i, 1, rr) comb /= i;
    return comb;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    FORE(ai, a) cin >> ai;

    sort(ALL(a));

    ll ansN = a.back();
    ll ansR = a.front();
    REP(i, 0, n - 1) {
        if (abs(a[i] - ansN / 2) <= abs(ansR - ansN / 2)) ansR = a[i];
    }

    cout << ansN << " " << ansR << endl;

    return 0;
}
