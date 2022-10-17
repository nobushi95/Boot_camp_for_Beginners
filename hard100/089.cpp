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
    cin >> N;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    FORE(a, A) a++;

    mint ans = 1;
    vector<ll> cnt(N + 1, 0);
    cnt[0] = 3;
    REP(i, 0, N) {
        if (0 < cnt[A[i] - 1]) {
            ans *= cnt[A[i] - 1];
            cnt[A[i] - 1] -= 1;
            cnt[A[i]] += 1;
        } else {
            ans = 0;
            break;
        }
    }

    cout << ans.val() << endl;

    return 0;
}
