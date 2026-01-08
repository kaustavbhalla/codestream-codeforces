#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for (auto i : s) {
      if (i != s[n - 1]) {
        count++;
      }
    }

    cout << count << "\n";
  }
}
