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
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    ll count = 1;
    if (N == 1) {
        cout << count << endl;
        return 0;
    }

    ll t;
    if (A[0] == A[1]) t = 0;
    else if (A[0] < A[1]) t = 1;
    else if (A[0] > A[1]) t = -1;

    REP(i, 1, N - 1) {
        if (A[i] == A[i + 1]) continue;
        else if (A[i] < A[i + 1]) {
            if (t == -1) {
                t = 0;
                count++;
            } else if (t == 0) {
                t = 1;
            }
        }
        else if (A[i] > A[i + 1]) {
            if (t == 1) {
                t = 0;
                count++;
            } else if (t == 0) {
                t = -1;
            }
        }
    }

    cout << count << endl;

    return 0;
}
