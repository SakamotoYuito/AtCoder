#include <iostream>

using namespace std;

int main() {
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < 3; i++) {
        char c = s[i];
        cout << c << endl;
        if (c == '1') count++;
    }
    cout << count << endl;
    return 0;
}