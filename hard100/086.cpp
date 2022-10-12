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

using mint = atcoder::modint1000000007;

int main() {
    ll N;
    vector<string> S(2);
    cin >> N >> S[0] >> S[1];

    mint ans = 1;
    ll x = 0;
    ll prePattern = -1;
    while (x < N) {
        if (S[0][x] == S[1][x]) {
            if (prePattern == -1) ans = 3;
            else if (prePattern == 0) ans *= 2;
            else ans *= 1;
            x++;
            prePattern = 0;
        } else {
            if (prePattern == -1) ans = 6;
            else if (prePattern == 0) ans *= 2;
            else ans *= 3;
            x += 2;
            prePattern = 1;
        }
    }

    cout << ans.val() << endl;

    return 0;
}
