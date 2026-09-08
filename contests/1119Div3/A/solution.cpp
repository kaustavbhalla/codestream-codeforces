#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int counter = 0;

  int left = 0;
  int right = k - 1;

  while (left < n) {
    int oneC = 0;
    int zeroC = 0;
    for (int i = left; i <= right; i++) {
      if (s[i] == '0') {
        zeroC++;
      } else {
        oneC++;
      }
    }

    if (zeroC > 0) {

    } else {
      counter++;
    }

    left = left + k;
    right = right + k;
  }

  cout << counter << "\n";
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
