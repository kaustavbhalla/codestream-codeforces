#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s = "";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      string b;
      cin >> b;

      if (s.empty()) {
        s = b;
      } else {
        if (s + b < b + s) {
          s = s + b;
        } else {
          s = b + s;
        }
      }
    }
    cout << s << "\n";
  }
}
