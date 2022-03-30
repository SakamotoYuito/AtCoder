#include <stdio.h>

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int mul = a * b;
    if (mul % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return 0;
}