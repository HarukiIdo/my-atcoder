#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
#define rep(i, n) for (lint i = 0; i < (lint)(n); i++)
#define reps(i, s, n) for (lint i = (s); i < (lint)(n); i++)
#define INF (1 << 30)
#define COUNTOF(x) (sizeof(x) / sizeof(*(x)))

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    int in;
    for (int i = 0; i < n; i++) {
        cin >> in;
        a.push_back(in);
    }

    int result = n;
    // ソートする

    // n-1回入れ替え作業を行う

    if (n <= 1) {
        // 1巻目じゃない時
        if (a[0] != 1)
            cout << result << endl;
    }
    // 2巻以上持っている時
    else {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] != j - 1) {
                int last = a[COUNTOF(a) - 1];
                a.erase(cbegin(n - 1), cbegin(n));
                a[last];

                result--;
            }
        }
    }
}
