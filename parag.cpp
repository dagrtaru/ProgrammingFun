#include <iostream>
 
using namespace std;
 
const int LGN = 30;
 
int main() 
{
    int n, p;
    cin >> n >> p;
 
    int ans = -1;
    for (int i = 1; i <= LGN; i++) {
        int n2 = n - i * p;
        if (n2 <= 0) {
            continue;
        }
 
        int bc = 0;
        for (int j = 0; j < LGN; j++) {
            bc += n2 >> j & 1;
        }
 
        if (bc <= i && i <= n2) {
            ans = i;
            break;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
