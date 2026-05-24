#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  if (c % 2 != 0) {
    if (a == b) {
      cout << "First" << "\n";
    }

    if (b > a) {
      cout << "Second" << "\n";
    }

    if (a > b) {
      cout << "First" << "\n";
    }
  } else if (c % 2 == 0) {
    if (a == b) {
      cout << "Second" << "\n";
    }

    if (b > a) {
      cout << "Second\n";
    }

    if (a > b) {
      cout << "First\n";
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
}
