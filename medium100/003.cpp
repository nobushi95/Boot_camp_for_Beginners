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
    vector<ll> A(S.length() + 1);

    REP(i, 0, S.length()) {
        if (S[i] == '<') chmax(A[i + 1], A[i] + 1);
    }

    RREP(i, S.length() - 1, 0) {
        if (S[i] == '>') chmax(A[i], A[i + 1] + 1);
    }

    ll ans = 0;
    FORE(a, A) ans += a;
    cout << ans << endl;

    return 0;
}
