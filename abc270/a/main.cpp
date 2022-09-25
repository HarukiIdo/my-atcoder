#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
#define rep(i, n) for (lint i = 0; i < (lint)(n); i++)
#define reps(i, s, n) for (lint i = (s); i < (lint)(n); i++)
#define INF (1 << 30)

int main() {
    lint a, b;
    cin >> a >> b;
    vector<bool> aflag = {false, false, false};
    vector<bool> bflag = {false, false, false};

    // aの得点の構成を判定する
    if ((a - 4) >= 0) {
        a -= 4;
        aflag[2] = true;
    }
    if ((a - 2) >= 0) {
        a -= 2;
        aflag[1] = true;
    }
    if ((a - 1) == 0) {
        aflag[0] = true;
    }

    // bの得点の構成を判定する
    if ((b - 4) >= 0) {
        b -= 4;
        bflag[2] = true;
    }
    if ((b - 2) >= 0) {
        b -= 2;
        bflag[1] = true;
    }
    if ((b - 1) == 0) {
        bflag[0] = true;
    }

    int count = 0;
    // すぬけくんの得点を判定する
    if (aflag[0] || bflag[0]) {
        count += 1;
    }
    if (aflag[1] || bflag[1]) {
        count += 2;
    }
    if (aflag[2] || bflag[2]) {
        count += 4;
    }
    cout << count << endl;
}
