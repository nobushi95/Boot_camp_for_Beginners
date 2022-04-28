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

using mint = atcoder::modint998244353;

int main() {
    ll N;
    cin >> N;
    vector<ll> D(N);
    FORE(d, D) cin >> d;

    if (D[0] != 0) {
        cout << 0 << endl;
        return 0;
    }

    REP(i, 1, N) {
        if (D[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    vector<ll> num(N);
    FORE(d, D) {
        num[d]++;
    }

    mint ans = 1;
    REP(i, 1, N) ans *= mint(num[i - 1]).pow(num[i]);
    cout << ans.val() << endl;
    
    return 0;
}
