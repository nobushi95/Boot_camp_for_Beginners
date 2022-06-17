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

vector<bool> makeIsPrime(ll size) {
    vector<bool> isPrime(size + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= size; i++) {
        if (isPrime[i]) {
            for (ll j = 2; i * j <= size; j++) isPrime[i * j] = false;
        }
    }

    return isPrime;
}

int main() {
    ll Q;
    cin >> Q;
    vector<ll> l(Q), r(Q);
    REP(i, 0, Q) cin >> l[i] >> r[i];

    ll maxNum = *max_element(ALL(r));
    auto isPrime = makeIsPrime(maxNum);

    vector<bool> isLike2017(maxNum + 1, false);
    REPEQ(i, 1, maxNum) {
        if (isPrime[i] && isPrime[(i + 1) / 2]) isLike2017[i] = true;
    }

    vector<ll> acc(maxNum + 1, 0);
    REPEQ(i, 1, maxNum) {
        acc[i] = acc[i - 1];
        if (isLike2017[i]) acc[i]++;
    }

    REP(i, 0, Q) {
        ll ans = acc[r[i]] - acc[l[i] - 1];
        cout << ans << endl;
    }

    return 0;
}
