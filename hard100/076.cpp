#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
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

int main() {
    string S;
    cin >> S;

    ll ans = 0;
    ll N = S.length();

    REP(i, 0, 1 << (N - 1)) {
        ll sum = 0;
        ll cur = S[0] - '0';
        REP(j, 0, N - 1) {
            if (i & (1 << j)) {
                sum += cur;
                cur = 0;
            }
            cur *= 10;
            cur += S[j + 1] - '0';
        }
        sum += cur;
        ans += sum;
    }

    cout << ans << endl;

    return 0;
}
