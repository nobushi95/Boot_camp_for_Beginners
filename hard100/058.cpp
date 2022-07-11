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

vector<ll> makeEnumDiv(ll n) {
    vector<ll> res;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i != 0) continue;
        res.push_back(i);
        if (n / i != i) res.push_back(n / i);
    }
    sort(ALL(res));
    return res;
}

int main() {
    ll N;
    cin >> N;

    auto res = makeEnumDiv(N);
    ll ans = 0;
    FORE(k, res) {
        ll m = N / k - 1;
        if (m == 0) continue;
        if (N / m == N % m) ans += m;
    }

    cout << ans << endl;

    return 0;
}
