#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int N;
    cin >> N;
    map<int, int> A;
    for (int i = 1; i <= N; i++) {
        int ai;
        cin >> ai;
        A[ai] = i;
    }

    for (int i = 1; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << A[N] << endl;

    return 0;
}