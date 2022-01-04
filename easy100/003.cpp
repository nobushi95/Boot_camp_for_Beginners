#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;

    int ca = 0;
    int cb = 0;
    for (char c : S) {
        if (c == 'a') {
            if (ca + cb < A + B) {
                cout << "Yes" << endl;
                ca++;
            } else {
                cout << "No" << endl;
            }
        } else if (c == 'b') {
            if ((ca + cb < A + B) && (cb < B)) {
                cout << "Yes" << endl;
                cb++;
            } else {
                cout << "No" << endl;
            }
        } else if (c == 'c') {
            cout << "No" << endl;
        }
    }

    return 0;
}