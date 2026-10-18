#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }

  int element = 0;

  for (int i = 0; i < n; i++) {
    if (element == x)
      break;
    if (!(~x & a[i])) {
      element |= a[i];
    } else {
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    if (element == x)
      break;
    if (!(~x & b[i])) {
      element |= b[i];
    } else {
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    if (element == x)
      break;
    if (!(~x & c[i])) {
      element |= c[i];
    } else {
      break;
    }
  }

  if (element == x) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
