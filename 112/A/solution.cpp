#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s1;
  string s2;

  cin >> s1 >> s2;
  transform(s1.begin(), s1.end(), s1.begin(),
            [](unsigned char c) { return tolower(c); });
  transform(s2.begin(), s2.end(), s2.begin(),
            [](unsigned char c) { return tolower(c); });

  if (s1 < s2) {
    cout << -1 << "\n";
  } else if (s1 > s2) {
    cout << 1 << "\n";
  } else if (s1 == s2) {
    cout << 0 << "\n";
  }
}
