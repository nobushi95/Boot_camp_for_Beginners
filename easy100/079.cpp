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
    ll N, A, B;
    cin >> N >> A >> B;

    if ((B - A) % 2 == 0) {
        cout << (B - A) / 2LL << endl;
        return 0;
    }

    ll min = LLONG_MAX;
    chmin(min, A - 1);
    chmin(min, N - B);
    min++;
    min += (B - A - 1) / 2;

    cout << min << endl;

    return 0;
}
