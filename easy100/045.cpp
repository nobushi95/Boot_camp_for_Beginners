#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    ll A, B;
    cin >> A >> B;

    int count = 0;
    REP(i, A, B + 1) {
        string S = to_string(i);
        if ((S[0] == S[4]) && (S[1] == S[3])) count++;
    }

    cout << count << endl;

    return 0;
}