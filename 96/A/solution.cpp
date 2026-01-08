#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int count = 1;
  for (int i = 1; i < s.size(); i++) {
    if (count >= 7) {
      break;
    }
    if (s[i - 1] == s[i]) {
      count++;
    } else {
      count = 1;
    }
  }

  if (count >= 7) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}
