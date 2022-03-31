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
    vector<string> S(3);
    REP(i, 0, 3) cin >> S[i];
    REP(i, 0, 3) reverse(ALL(S[i]));

    string ans;
    ll t = 0;
    while (true) {
        if (S[0].size() == 0 && t == 0) { ans = "A"; break; }
        if (S[1].size() == 0 && t == 1) { ans = "B"; break; }
        if (S[2].size() == 0 && t == 2) { ans = "C"; break; }
        ll cur = t;
        t = S[cur].back() - 'a';
        S[cur].pop_back();
    }

    cout << ans << endl;

    return 0;
}
