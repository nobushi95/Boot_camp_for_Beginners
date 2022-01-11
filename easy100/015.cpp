#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for (auto &di : d) cin >> di;

    sort(d.begin(), d.end());

    int half = N / 2;
    if (d.at(half - 1) == d.at(half)) {
        cout << 0 << endl;
        return 0;
    }

    cout << d.at(half) - d.at(half - 1) << endl;

    return 0;
}