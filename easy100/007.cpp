#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    vector<vector<int>> A(3, vector<int>(3));
    for (int j = 0; j < 3; j++)
        for (int i = 0; i < 3; i++)
            cin >> A.at(i).at(j);
    
    vector<vector<bool>> a(3, vector<bool>(3));
    for (int i = 0; i < 3; i++) fill(a.at(i).begin(), a.at(i).end(), false);
    
    int N;
    cin >> N;
    vector<int> b(N);
    for (int i = 0; i < N; i++) {
        int b;
        cin >> b;
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                if (A.at(x).at(y) == b) {
                    a.at(x).at(y) = true;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        bool bingo = true;
        for (int j = 0; j < 3; j++) {
            bingo &= a.at(i).at(j);
        }
        if (bingo) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    for (int j = 0; j < 3; j++) {
        bool bingo = true;
        for (int i = 0; i < 3; i++) {
            bingo &= a.at(i).at(j);
        }
        if (bingo) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if (a[0][0] && a[1][1] && a[2][2]) {
        cout << "Yes" << endl;
        return 0;
    }
    if (a[0][2] && a[1][1] && a[2][0]) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}