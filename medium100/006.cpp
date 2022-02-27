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

int main() {
    ll H, W;
    cin >> H >> W;
    vector<string> S(H);
    FORE(s, S) cin >> s;
    
    vector<string> S2(H + 2);
    string dummy(W + 2, '.');
    S2[0] = dummy;
    S2[H + 1] = dummy;
    REP(i, 0, H) {
        S2[i + 1] = '.' + S[i] + '.';
    }

    REP(i, 1, H + 1) {
        REP(j, 1, W + 1) {
            char &c = S2[i][j];
            if (c == '#') {
                cout << '#';
            } else {
                ll count = 0;
                if (S2[i - 1][j - 1] == '#') count++;
                if (S2[i - 1][j]     == '#') count++;
                if (S2[i - 1][j + 1] == '#') count++;
                if (S2[i][j - 1]     == '#') count++;
                if (S2[i][j + 1]     == '#') count++;
                if (S2[i + 1][j - 1] == '#') count++;
                if (S2[i + 1][j]     == '#') count++;
                if (S2[i + 1][j + 1] == '#') count++;
                cout << count;
            }
        }
        cout << "\n";
    }
    cout << endl;

    return 0;
}
