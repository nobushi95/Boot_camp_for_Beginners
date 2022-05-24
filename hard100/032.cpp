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

using mint = atcoder::modint1000000007;

int main() {
    ll N;
    cin >> N;

    vector<ll> num(N + 1);
    ll s = 0;
    generate(ALL(num), [&s]() { auto v = s; s++; return v; });

    map<ll, ll> primeFactor;

    REPEQ(i, 2, N) {
        REPEQ(j, 2, N) {
            while (num[j] % i == 0) {
                num[j] /= i;
                primeFactor[i]++;
            }
        }
    }

    mint ans = 1;
    FORE(p, primeFactor) {
        ans *= p.second + 1;
    }

    cout << ans.val() << endl;

    return 0;
}
