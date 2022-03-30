#include <stdio.h>

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    string s;
    cin >> a >> b >> c;
    cin >> s;

    int sum = a + b + c;
    printf("%d %s\n", sum, s.c_str());

    return 0;
}