#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for (auto &vi : v) cin >> vi;

    sort(v.begin(), v.end());

    double sum = v.at(0);
    for (int i = 1; i < N; i++) {
        sum += v.at(i);
        sum /= 2.0;
    }

    cout << sum << endl;

    return 0;
}