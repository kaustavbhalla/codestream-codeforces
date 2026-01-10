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

    char a = s[0];
    string result{a};
    for (int i = 1; i < s.size(); i += 2) {
      result += s[i];
    }

    cout << result << "\n";
  }
}
