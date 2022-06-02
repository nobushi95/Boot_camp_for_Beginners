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

    vector<ll> black(1, 0);
    ll blackNum = 0;
    FORE(s, S) {
        if (s == '#') blackNum++;
        black.push_back(blackNum);
    }

    vector<ll> white(1, 0);
    ll whiteNum = 0;
    for (auto itr = S.rbegin(); itr != S.rend(); itr++) {
        if (*itr == '.') whiteNum++;
        white.push_back(whiteNum);
    }
    reverse(ALL(white));

    ll ans = LLONG_MAX;
    REP(i, 0, N + 1) chmin(ans, black[i] + white[i]);

    cout << ans << endl;

    return 0;
}
