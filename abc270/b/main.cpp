#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
#define rep(i, n) for (lint i = 0; i < (lint)(n); i++)
#define reps(i, s, n) for (lint i = (s); i < (lint)(n); i++)
#define INF (1 << 30)

int main() {
    lint x, y, z;
    cin >> x >> y >> z;

    if (y < 0) {
        x = -x;
        y = -y;
        z = -z;
    }

    if (x < y) {
        cout << abs(x) << endl;
    } else {
        if (y < z) {
            cout << -1 << endl;
        } else {
            cout << abs(z) + abs(x - z) << endl;
        }
    }
}
