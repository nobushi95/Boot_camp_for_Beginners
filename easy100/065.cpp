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
    string s;
    cin >> s;

    size_t start = s.find('A');
    reverse(s.begin(), s.end());
    size_t end = s.find('Z');

    cout << s.size() - start - end << endl;

    return 0;
}