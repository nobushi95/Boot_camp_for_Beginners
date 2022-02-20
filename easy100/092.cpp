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
    string S;
    cin >> S;

    ll ans = 0;

    while (true) {
        bool isSplited = false;
        REP(i, 0, ll(S.length()) - 1LL) {
            if ((S[i] == '0' && S[i + 1] == '1') || (S[i] == '1' && S[i + 1] == '0')) {
                isSplited = true;
                S = S.substr(0, i) + S.substr(i + 2);
                ans += 2;
                break;
            }
        }

        if (!isSplited) break;
    }

    cout << ans << endl;

    return 0;
}
