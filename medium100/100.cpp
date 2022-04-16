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
    ll n;
    cin >> n;
    vector<ll> v(n);
    FORE(vi, v) cin >> vi;

    map<ll, ll> tbl1, tbl2;
    for (int i = 0; i < n; i += 2) {
        tbl1[v[i]]++;
    }
    for (int i = 1; i < n; i += 2) {
        tbl2[v[i]]++;
    }

    auto itr1 = max_element(ALL(tbl1), [](auto &l, auto &r) { return l.second < r.second; });
    auto itr2 = max_element(ALL(tbl2), [](auto &l, auto &r) { return l.second < r.second; });

    if (itr1->first != itr2->first) {
        ll ans = n - itr1->second - itr2->second;
        cout << ans << endl;
        return 0;
    }

    if (itr1->second == n / 2 && itr2->second == n / 2) {
        cout << n / 2 << endl;
        return 0;
    }

    ll ans = LLONG_MAX;
    if (tbl1.size() > 1) {
        map<ll, ll> tbl1cp = tbl1;
        tbl1cp.erase(itr1->first);
        auto nextitr1 = max_element(ALL(tbl1cp), [](auto &l, auto &r) { return l.second < r.second; });
        chmin(ans, n - nextitr1->second - itr2->second);
    }
    if (tbl2.size() > 2) {
        map<ll, ll> tbl2cp = tbl2;
        tbl2cp.erase(itr2->first);
        auto nextitr2 = max_element(ALL(tbl2cp), [](auto &l, auto &r) { return l.second < r.second; });
        chmin(ans, n - itr1->second - nextitr2->second);
    }
    cout << ans << endl;

    return 0;
}
