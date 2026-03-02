#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  set<int> s;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s.insert(a[i]);
  }

  if (s.size() == 1) {
    cout << "YES" << "\n";
  } else if (s.size() != 2) {
    cout << "NO" << "\n";
  } else {
    int firstUniVal = *s.begin();
    int c1 = count(a.begin(), a.end(), firstUniVal);

    if (c1 == n / 2 || c1 == (n + 1) / 2) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
