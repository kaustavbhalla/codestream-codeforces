#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  if (isupper(s[0])) {
    cout << s << "\n";
  } else {
    s[0] = s[0] - 32;
    cout << s << "\n";
  }
}
