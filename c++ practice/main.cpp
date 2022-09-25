#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long lint;
#define rep(i, n) for (lint i = 0; i < (lint)(n); i++)
#define reps(i, s, n) for (lint i = (s); i < (lint)(n); i++)
#define INF (1 << 30)

int main()
{
  string s, t;
  int count = 0;
  cin >> s;
  cin >> t;

  // 探索
  if (s.length() > t.length())
  {
    cout << "No" << endl;
    return 0;
  }
  else
  {
    rep(i, s.length())
    {
      if (s[i] != t[i])
      {
        cout << "No" << endl;
        return 0;
      }
    }
    cout << "Yes" << endl;
  }
}
