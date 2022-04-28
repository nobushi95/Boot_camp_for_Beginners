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
    ll N;
    cin >> N;
    string S;
    cin >> S;

    ll ans = 0;
    REPEQ(i, '0', '9') REPEQ(j, '0', '9') REPEQ(k, '0', '9') {
        auto iitr = find(ALL(S), i);
        if (iitr == S.end()) continue;
        auto jitr = find(iitr + 1, S.end(), j);
        if (jitr == S.end()) continue;
        auto kitr = find(jitr + 1, S.end(), k);
        if (kitr == S.end()) continue;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
