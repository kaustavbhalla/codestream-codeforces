#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;

  vector<char> a;

  for (char x : s) {
    if (x != '+') {
      a.emplace_back(x);
    }
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++) {
    cout << a[i];

    if (i != a.size() - 1) {
      cout << "+";
    }
  }

  cout << "\n";
}
