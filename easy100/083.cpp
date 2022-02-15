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
    int N;
    cin >> N;
    vector<vector<int>> A(2, vector<int>(N));
    REP(i, 0, N) cin >> A[0][i];
    REP(i, 0, N) cin >> A[1][i];

    int max = 0;
    REP(i, 0, N) {
        int n = accumulate(A[0].begin(), A[0].begin() + i + 1, 0) + accumulate(A[1].begin() + i, A[1].end(), 0);
        chmax(max, n);
    }

    cout << max << endl;

    return 0;
}
