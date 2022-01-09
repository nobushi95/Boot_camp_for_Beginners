#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    int max = -1;
    for (int i = 1; i < N - 1; i++) {
        int d = A.at(i+1) - A.at(i);
        max = d > max ? d : max;
    }
    int d = K - A.at(N - 1) + A.at(0);
    max = d > max ? d : max;

    cout << K - max << endl;

    return 0;
}