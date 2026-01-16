#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    if (s[0] == 'a') {
      cout << "YES" << "\n";

    } else if (s[0] == 'b') {
      if (s[1] == 'a') {
        cout << "YES" << "\n";
      } else {
        cout << "NO" << "\n";
      }

    } else if (s[0] == 'c') {
      if (s[1] == 'a') {
        cout << "NO" << "\n";
      } else {
        cout << "YES" << "\n";
      }
    }
  }
}
