#include <iostream>

using namespace std;

int main() {
    int N, sum;
    bool can = false;
    cin >> N;

    for (int i = 0; i <= N / 4; i++) {
        for (int j = 0; j <= N / 7; j++) {
            sum = 4 * i + 7 * j;
            if (sum == N) can = true;
        }
    }

    cout << (can ? "Yes" : "No") << endl;
}