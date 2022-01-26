#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    string S;
    cin >> S;

    int count01 = 0;
    bool zero = true;
    FORE(s, S) {
        if (zero) {
            if (s == '1') count01++;
        } else {
            if (s == '0') count01++;
        }
        zero = !zero;
    }

    int count10 = S.size() - count01;

    cout << (count10 > count01 ? count01 : count10) << endl;

    return 0;
}