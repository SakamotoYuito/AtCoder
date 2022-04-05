#include <stdio.h>

#include <iostream>

using namespace std;

int a[] = {1, 2, 4, 7};
int n, k;

bool dfs(int i, int sum) {
    if (i == sum) return sum == k;
    printf("%d", i);

    if (dfs(i + 1, sum)) return true;

    if (dfs(i + 1, sum)) return true;

    return false;
}

void solve() {
    if (dfs(0, 0))
        printf("Yes\n");
    else
        printf("No\n");
}

int main() {
    n = 4;
    k = 13;
    solve();
    return 0;
}