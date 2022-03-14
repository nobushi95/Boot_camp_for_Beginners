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

template <class T>
T gcd(T a, T b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}
template <class T>
T lcm(T a, T b) {
    return abs(a) / gcd<T>(a, b) * abs(b);
}

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    ll acd = (A - 1) / C;
    ll add = (A - 1) / D;
    ll bcd = B / C;
    ll bdd = B / D;

    ll acdd = (A - 1) / lcm(C, D);
    ll bcdd = B / lcm(C, D);

    ll c = bcd - acd;
    ll d = bdd - add;
    ll cd = bcdd - acdd;
    ll ans = B - (A - 1) - c - d + cd;
    cout << ans << endl;

    return 0;
}
