#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int s, k, m;
    cin >> s >> k >> m;

    if (s == k) {
      if (k == m) {
        cout << s << "\n";
      }

      if (k > m) {
        cout << k - m << "\n";
      }

      if (m > k) {
        int i = 1;
        while ((k * i) < m) {
          i++;
        }
        cout << (k * i) - m << "\n";
      }
    } else if (s < k) {
      if (k == m) {
        cout << s << "\n";
      }

      if (k < m) {
        cout << k - (m - k) << "\n";
      }

      if (k > m) {
        cout << 0 << "\n";
      }
    } else if (s > k) {
      if (k == m) {
        cout << m << "\n";
      }

      if (k < m) {
        cout << ((2 * k) - m) << "\n";
      }

      if (k > m) {
        cout << s - m << "\n";
      }
    }
  }
}
