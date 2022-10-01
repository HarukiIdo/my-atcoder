#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
#define rep(i, n) for (lint i = 0; i < (lint)(n); i++)
#define reps(i, s, n) for (lint i = (s); i < (lint)(n); i++)
#define INF (1 << 30)

int main() {
    int n, q;
    cin >> n >> q;

    int l;
    vector<vector<int>> a(n);
    rep(j, n) {
        cin >> l;
        a[j] = vector<int>(l);
        rep(i, l) { cin >> a[j][i]; }
    }

    int s, t;
    rep(i, q) {
        cin >> s >> t;
        cout << a[s - 1][t - 1] << endl;
    }
}
