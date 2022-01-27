#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    ll A, B, C, K;
    cin >> A >> B >> C >> K;

    if (K % 2 == 0) {
        cout << A - B << endl;
    } else {
        cout << B - A << endl;
    }
    
    return 0;
}