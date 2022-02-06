#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    string S;
    cin >> S;

    int n = count(S.begin(), S.end(), 'N');
    int s = count(S.begin(), S.end(), 'S');
    int w = count(S.begin(), S.end(), 'W');
    int e = count(S.begin(), S.end(), 'E');

    if (n > 0 && s == 0) {
        cout << "No" << endl;
        return 0;
    }

    if (s > 0 && n == 0) {
        cout << "No" << endl;
        return 0;
    }

    if (w > 0 && e == 0) {
        cout << "No" << endl;
        return 0;
    }

    if (e > 0 && w == 0) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}