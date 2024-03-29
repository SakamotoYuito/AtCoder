#include <iostream>

using namespace std;

int main() {
    int N;
    int t[100010], x[100010], y[100010];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

    bool can = true;

    for (int i = 0; i < N; i++) {
        int dt = t[i + 1] - t[i];
        int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
        if (dt < dist) can = false;
        if (dt % 2 != dist % 2) can = false;
    }

    cout << (can ? "Yes" : "No") << endl;

    return 0;
}