#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int longestSize = 0;
  int currentSize = 0;
  while (n--) {
    int x;

    cin >> x;

    if (x == 1) {
      currentSize = 0;
      continue;
    } else {
      currentSize++;
      longestSize = max(longestSize, currentSize);
    }
  }

  cout << longestSize << "\n";
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
