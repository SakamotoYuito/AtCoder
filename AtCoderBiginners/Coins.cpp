// 全探索

#include <iostream>

using namespace std;

int main() {
    int A, B, C, X;
    int coins[3] = {500, 100, 50};
    cin >> A >> B >> C >> X;

    int count = 0;

    for (int a = 0; a <= A; a++) {
        for (int b = 0; b <= B; b++) {
            for (int c = 0; c <= C; c++) {
                int total = 500 * a + 100 * b + 50 * c;
                if (total == X) count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}