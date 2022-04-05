#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, max = 0, alice = 0, bob = 0;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0)
            alice += a[i];
        else
            bob += a[i];
    }

    cout << alice - bob << endl;

    return 0;
}