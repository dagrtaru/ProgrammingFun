#include <bits/stdc++.h>
using namespace std;

int main() {
    int x_1, x_2, x_3;
    cin >> x_1 >> x_2 >> x_3;
    cout << max({x_1, x_2, x_3}) - min({x_1, x_2, x_3}) << endl;
    return 0;
}
