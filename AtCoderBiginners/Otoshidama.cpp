#include <iostream>

using namespace std;

int main() {
    int N, Y, x, y, z;
    cin >> N >> Y;

    int res10000 = -1, res5000 = -1, res1000 = -1;
    for (int x = 0; x <= N; x++) {
        for (int y = 0; y <= N - x; y++) {
            int z = N - x - y;
            int result = 10000 * x + 5000 * y + 1000 * z;
            if (result == Y) {
                res10000 = x;
                res5000 = y;
                res1000 = z;
            }
        }
    }
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}