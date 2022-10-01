#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
#define rep(i, n) for (lint i = 0; i < (lint)(n); i++)
#define reps(i, s, n) for (lint i = (s); i < (lint)(n); i++)
#define INF (1 << 30)

string itoh(int x, int size = 0) {
    char hex_buf[16];
    sprintf(hex_buf, "%X", x);
    string hex_str = hex_buf;
    if (size == 0) {
        return hex_str;
    }
    string front;
    if (x >= 0)
        front = "0";
    else
        front = "F";
    // 指定のサイズになるまで文字を増やす
    int diff = size - hex_str.length();
    for (int i = 0; i < diff; i++) {
        hex_str = front + hex_str;
    }
    // 指定のサイズになるまで文字を減らす
    if (diff < 0) {
        hex_str.erase(0, -diff);
    }
    return hex_str;
}

int main() {
    int in;
    cin >> in;

    string result;
    result = itoh(in, 2);
    cout << result << endl;
}
