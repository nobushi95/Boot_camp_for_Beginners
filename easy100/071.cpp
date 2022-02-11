#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, L;
    cin >> N >> L;
    vector<string> S(N);
    FORE(s, S) cin >> s;

    sort(ALL(S));

    FORE(s, S) cout << s;
    cout << endl;

    return 0;
}