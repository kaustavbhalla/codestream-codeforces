#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  vector<int> b;
  vector<int> c;
  int i;
  for (i = 0; i < n; i++) {
    if (a[0] == a[i]) {
      b.emplace_back(a[i]);
    } else {
      break;
    }
  }

  for (int j = i; j < n; j++) {
    c.emplace_back(a[j]);
  }

  if (c.empty()) {
    cout << -1 << "\n";
  } else {
    cout << b.size() << " " << c.size() << "\n";
    for (auto x : b) {
      cout << x << " ";
    }
    cout << "\n";

    for (auto y : c) {
      cout << y << " ";
    }
    cout << "\n";
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
