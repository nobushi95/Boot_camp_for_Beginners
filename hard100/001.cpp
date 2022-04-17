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
    string S;
    cin >> S;
    ll N = S.length();

    vector<vector<ll>> dp(33, vector<ll>(100100, 0));
    REP(i, 0, N) {
        if (S[i] == 'R') dp[0][i] = i + 1;
        else dp[0][i] = i - 1;
    }

    REP(p, 0, 32) {
        REP(i, 0, N) {
            dp[p + 1][i] =dp[p][dp[p][i]];
        }
    }

    vector<ll> ans(100100, 0);
    REP(i, 0, N) ans[dp[32][i]]++;
    REP(i, 0, N - 1) {
        cout << ans[i] << " ";
    }
    cout << ans[N - 1] << endl;

    return 0;
}
