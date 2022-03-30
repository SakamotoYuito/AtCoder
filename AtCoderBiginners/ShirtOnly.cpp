#include <iostream>
#include <vector>

using namespace std;

// bool judge(int n) {}

int main() {
    int n, a;
    vector<int> input(n);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> input[i];

    int count = 0;

    while (true) {
        bool flag_odd = false;
        for (int i = 0; i < n; i++) {
            if (input[i] % 2 == 1) flag_odd = true;
        }

        if (flag_odd) break;

        for (int i = 0; i < n; i++) {
            input[i] /= 2;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}