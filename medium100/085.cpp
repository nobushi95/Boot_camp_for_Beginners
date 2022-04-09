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

    if (S.size() < 26) {
        vector<bool> tbl(26, false);
        FORE(s, S) {
            tbl[s - 'a'] = true;
        }
        string ans = S;
        REP(i, 0, 26) {
            if (!tbl[i]) {
                char c = 'a' + i;
                ans += c;
                break;
            }
        }
        cout << ans << endl;
    } else if (S.size() == 26) {
        if (S == "zyxwvutsrqponmlkjihgfedcba") {
            cout << -1 << endl;
        } else {
            string cp = S;
            next_permutation(ALL(S));
            REP(i, 0, 26) {
                cout << S[i];
                if (S[i] != cp[i]) break;
            }
            cout << endl;
        }
    } else {
        cout << -1 << endl;
    }

    return 0;
}
