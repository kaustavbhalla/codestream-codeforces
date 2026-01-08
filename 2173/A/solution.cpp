#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int count = 0;
    int awakeUntil = -1;

    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        awakeUntil = max(awakeUntil, i + k);
      } else {
        if (i > awakeUntil) {
          count++;
        }
      }
    }

    cout << count << "\n";
  }
}
