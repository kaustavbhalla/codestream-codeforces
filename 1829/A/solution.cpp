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

    string compare = "codeforces";

    int count = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] != compare[i]) {
        count++;
      }
    }

    cout << count << "\n";
  }
}
