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

vector<ll> h(101);
ll ans = 0;

void func(ll l, ll r) {
    if (l >= r) return;

    ll min = *min_element(h.begin() + l, h.begin() + r);
    REP(i, l, r) h[i] -= min;
    ans += min;

    vector<ll> zero;
    zero.push_back(-1);
    REP(i, l, r) if (h[i] == 0) zero.push_back(i);
    zero.push_back(r);

    REP(i, 0, zero.size() - 1) func(zero[i] + 1, zero[i + 1]);
}

int main() {
    ll N;
    cin >> N;
    REP(i, 0, N) cin >> h[i];
    func(0, N);
    cout << ans << endl;

    return 0;
}
