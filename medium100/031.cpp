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
    ll N;
    cin >> N;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    ll cntQ = 0;
    FORE(ai, a) {
        if (ai % 4 == 0) cntQ++;
    }

    ll cntB = 0;
    FORE(ai, a) {
        if (ai % 2 == 0) cntB++;
    }

    cntB = max(0LL, cntB - cntQ);

    if (N / 2 <= cntQ) cout << "Yes" << endl;
    else {
        if (cntQ * 2 + cntB >= N) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    

    return 0;
}
