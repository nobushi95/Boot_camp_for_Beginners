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
    string S, T;
    cin >> S >> T;
    ll N = S.length();

    vector<vector<bool>> tbl(26, vector<bool>(26, false));
    REP(i, 0, N) {
        tbl[S[i] - 'a'][T[i] - 'a'] = true;
    }

    REP(i, 0, 26) {
        ll count = 0;
        REP(j, 0, 26) if (tbl[i][j]) count++;
        if (count >= 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    REP(i, 0, 26) {
        ll count = 0;
        REP(j, 0, 26) if (tbl[j][i]) count++;
        if (count >= 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
