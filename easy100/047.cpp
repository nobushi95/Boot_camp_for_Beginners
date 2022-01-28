#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    ll N;
    cin >> N;

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    ll li_1 = 1;
    ll li_2 = 2;
    ll li;
    REP(i, 2, N + 1) {
        li = li_1 + li_2;
        li_2 = li_1;
        li_1 = li;
    }

    cout << li << endl;

    return 0;
}