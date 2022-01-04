#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int N, M, C;
    cin >> N >> M >> C;
    vector<int> B(M);
    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < M; i++) cin >> B.at(i);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cin >> A.at(i).at(j);
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++) {
            sum += A[i][j] * B[j];
        }
        sum += C;
        if (sum > 0) count++;
    }

    cout << count << endl;

    return 0;
}