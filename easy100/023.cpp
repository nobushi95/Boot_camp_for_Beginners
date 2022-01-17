#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int N, D, X;
    cin >> N >> D >> X;
    vector<int> A(N);
    for (auto &ai : A) cin >> ai;

    int sum = 0;
    for (const auto &ai : A) {
        int m = 0;
        while ((m * ai + 1) <= D) {
            sum++;
            m++;
        }
    }
    sum += X;

    cout << sum << endl;

    return 0;
}