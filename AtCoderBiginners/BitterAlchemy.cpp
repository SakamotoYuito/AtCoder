#include <iostream>

using namespace std;

int main() {
    int N, X, sum = 0;
    int m[1010];
    cin >> N >> X;
    int min = X;

    for (int i = 0; i < N; i++) {
        cin >> m[i];
        sum += m[i];
        if (m[i] < min) min = m[i];
    }

    int ans = (X - sum) / min + N;
    cout << ans << endl;

    return 0;
}