#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if (a[n - 1] != -1 && a[0] != -1) {
      cout << abs(a[n - 1] - a[0]) << endl;
      for (auto x : a) {
        if (x == -1) {
          x = 0;
        }
        cout << x << " ";
      }
      cout << endl;
    } else if (a[n - 1] == -1 && a[0] == -1) {
      cout << 0 << endl;
      for (auto x : a) {
        if (x == -1) {
          x = 0;
        }
        cout << x << " ";
      }
      cout << endl;
    } else if (a[n - 1] == -1 && a[0] != -1) {
      cout << 0 << endl;
      a[n - 1] = a[0];
      for (auto x : a) {
        if (x == -1) {
          x = 0;
        }
        cout << x << " ";
      }
      cout << endl;
    } else if (a[n - 1] != -1 && a[0] == -1) {
      cout << 0 << endl;
      a[0] = a[n - 1];
      for (auto x : a) {
        if (x == -1) {
          x = 0;
        }
        cout << x << " ";
      }
      cout << endl;
    }
  }
}
