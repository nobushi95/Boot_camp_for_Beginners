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

    ll sum = accumulate(ALL(A), 0LL);
    ll mid = (sum + 1) / 2;

    ll acc = 0;
    ll candidate = 0;
    REP(i, 0, N) {
        acc += A[i];
        if (acc == mid) {
            cout << 0 << endl;
            return 0;
        } else if (acc > mid) {
            candidate = i;
            break;
        }
    }

    ll first = accumulate(A.begin(), A.begin() + candidate, 0);
    ll second = accumulate(A.begin() + candidate + 1, A.end(), 0);
    ll dif = abs(first - second);

    cout << abs(dif - A[candidate]) << endl;

    return 0;
}
