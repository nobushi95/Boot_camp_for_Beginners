#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> X(N);
    for (int i = 0; i < N; i++) cin >> X.at(i);

    vector<int> sum;
    for (int p = *min_element(X.begin(), X.end()); p <= *max_element(X.begin(), X.end()); p++) {
        sum.push_back(0);
        for (int j = 0; j < N; j++){
            *(sum.end() - 1) += pow(p - X.at(j), 2);
        }
    }

    cout << *min_element(sum.begin(), sum.end()) << endl;

    return 0;
}