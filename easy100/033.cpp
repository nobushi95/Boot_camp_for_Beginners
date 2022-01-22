#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main()
{
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    for (int i = 0; i < A; i++) {
        if (S[i] < '0' || S[i] > '9') {
            cout << "No" << endl;
            return 0;
        }
    }

    if (S[A] != '-') {
        cout << "No" << endl;
        return 0;
    }

    for (int i = A + 1; i < S.size(); i++) {
        if (S[i] < '0' || S[i] > '9') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}