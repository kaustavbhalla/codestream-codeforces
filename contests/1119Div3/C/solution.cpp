#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int first = -1;
  int last = -1;

  for (int i = 0; i < n; i++) {
    cin >> a[i];

    if (a[i] == 1) {
      if (first == -1) {
        first = i;
      }
      last = i;
    }
  }

  if (first == -1) {
    int firstMin = -1;
    int lastMin = -1;

    for (int i = 0; i < n; i++) {
      if (a[i] == -1) {
        if (firstMin == -1) {
          firstMin = i;
        }

        lastMin = i;
      }
    }

    if (firstMin != -1) {
      a[firstMin] = 1;
    }

    if (lastMin != -1) {
      a[lastMin] = 1;
    }
  } else {
    for (int i = 0; i < first; i++) {
      if (a[i] == -1) {
        a[i] = 1;
        break;
      }
    }

    for (int i = n - 1; i > last; i--) {
      if (a[i] == -1) {
        a[i] = 1;
        break;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (a[i] == -1) {
      a[i] = 0;
    }
  }

  for (auto x : a) {
    cout << x << " ";
  }

  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
