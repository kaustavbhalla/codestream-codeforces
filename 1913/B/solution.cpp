#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  int zeroCount = 0;
  int oneCount = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] - '0' == 0) {
      zeroCount++;
    } else {
      oneCount++;
    }
  }

  int counter = 0;
  if (zeroCount == oneCount) {
    cout << 0 << "\n";

  } else if (oneCount == 0 || zeroCount == 0) {
    cout << s.size() << "\n";

  } else if (s[0] - '0' == 0) {
    int i = 0;

    while (s[i] - '0' == 0) {
      counter++;
      i++;
    }

    cout << counter << "\n";
  } else if (s[0] - '0' == 1) {
    int j = 0;

    while (s[j] - '0' == 1) {
      counter++;
      j++;
    }

    cout << counter << "\n";
  }

  else {
    if (oneCount > zeroCount && oneCount > 2) {
      cout << oneCount << "\n";
    } else if (oneCount > zeroCount && oneCount == 2) {
      cout << 1 << "\n";
    } else if (zeroCount > oneCount && zeroCount > 2) {
      cout << zeroCount << "\n";
    } else if (zeroCount > oneCount && zeroCount == 2) {
      cout << 1 << "\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
