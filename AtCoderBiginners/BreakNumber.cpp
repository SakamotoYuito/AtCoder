#include <iostream>

using namespace std;

int main() {
    int N, ans, max = 0;
    cin >> N;

    for (int n = 1; n <= N; n++) {
        int num = n;
        int c = 0;
        while (num % 2 == 0) {
            num /= 2;
            c++;
        }
        if (c >= max) {
            max = c;
            ans = n;
        }
    }

    cout << ans << endl;
}